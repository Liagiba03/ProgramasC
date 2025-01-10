#include <mysql/mysql.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>

#define BAUDRATE B9600
#define PORT "/dev/ttyACM1" // Cambia esto según tu configuración

int compareRFID(MYSQL *con, const char *rfid) {
    char query[100];
    sprintf(query, "SELECT * FROM alumno WHERE UID = '%s'", rfid);
    mysql_query(con, query);

    MYSQL_RES *result = mysql_store_result(con);
    int num_rows = mysql_num_rows(result);

    mysql_free_result(result);

    return num_rows;
}

int main(){
    //  gcc VALIDAR.c -o VALIDAR -lmysqlclient
    MYSQL *con;
    MYSQL_RES *result;
    MYSQL_ROW row;
    int fd;
    struct termios serial;
    //CONEXION
    //PUERTO
    con = mysql_init(NULL);
    //mysql_real_connect(con, "localhost", "root", "SusSand#", "alumno", 0, NULL, 0);
    if (!mysql_real_connect(con, "localhost", "root", "SusSand#12", "alumno", 0, NULL, 0)) {
        fprintf(stderr, "Error de conexión: %s\n", mysql_error(con));
        return 1;
    }
    //CONEXION FIN
    //PUERTO
    // Abrir el puerto serie
    fd = open(PORT, O_RDWR | O_NOCTTY);
    if (fd == -1)
    {
        perror("Error al abrir el puerto serie");
        return -1;
    }

    // Configurar los parámetros del puerto serie
    memset(&serial, 0, sizeof(serial));
    serial.c_iflag = 0;
    serial.c_oflag = 0;
    serial.c_cflag = BAUDRATE | CS8 | CREAD | CLOCAL;
    serial.c_lflag = 0;
    serial.c_cc[VMIN] = 0;
    serial.c_cc[VTIME] = 0;

    tcsetattr(fd, TCSANOW, &serial);

    // Leer datos del puerto serie
    char buffer[255];
    int bytes_read;
    while (1) {
    bytes_read = read(fd, buffer, sizeof(buffer));
    if (bytes_read > 0) {
        buffer[bytes_read] = '\0';
        printf("%s\n", buffer);

        // Verificar si se han detectado 8 dígitos
        if (strlen(buffer) == 9) {
            // Comparar RFID con la base de datos
            if (con && compareRFID(con, buffer) > 0) {
                printf("Tarjeta RFID válida\n");
                break; // Salir del bucle si se encuentra una coincidencia
            } else {
                printf("Tarjeta RFID inválida. Vuelve a escanear otra tarjeta.\n");
            }
        }
    }
}
    // Realizar la consulta
    mysql_query(con, "SELECT * FROM alumno");

    // Obtener el resultado
    result = mysql_store_result(con);

    // Recorrer los resultados fila por fila
    while ((row = mysql_fetch_row(result))) {
        // Acceder a los valores de cada columna
        printf("\nUID: %s, Nombre: %s\n", row[0], row[1]);
    }

    mysql_free_result(result);

    mysql_close(con);
    return 0;
}
