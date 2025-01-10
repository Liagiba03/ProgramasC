#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define SERIAL_PORT "/dev/ttyS3"  // Reemplaza con el puerto serial correcto en tu sistema
#define BUFFER_SIZE 256

int main() {
    int puertoSerial = open(SERIAL_PORT, O_RDWR);
    if (puertoSerial < 0) {
        fprintf(stderr, "Error al abrir el puerto serial\n");
        return 1;
    }

    // Leer el contenido del puerto serial en un búfer
    char buffer[BUFFER_SIZE];
    ssize_t bytesRead = read(puertoSerial, buffer, sizeof(buffer) - 1);
    if (bytesRead < 0) {
        fprintf(stderr, "Error al leer el puerto serial\n");
        close(puertoSerial);
        return 1;
    }

    // Añadir el carácter nulo al final del búfer para convertirlo en una cadena
    buffer[bytesRead] = '\0';

    // Imprimir el contenido del puerto serial
    printf("Contenido del puerto serial: %s\n", buffer);

    close(puertoSerial);
    return 0;
}
