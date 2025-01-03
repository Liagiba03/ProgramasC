#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    clock_t start, end;
    double tiempoUsadoCPU;

    start = clock(); //Inicia el tiempo desde donde se inicia a ejecutar
    char comando[100];
    printf("Escribe el programa que deseas abrir: ");
    scanf("%s",comando);
    system(comando); // Ejecutar algun programa desde la terminal
    end = clock(); //Finaliza el tiempo en donde terminó de ejecutar

    tiempoUsadoCPU = ((double) (end - start))/ CLOCKS_PER_SEC;
    printf("Tiempo de CPU usado: %f segundos\n", tiempoUsadoCPU);
    printf("Ciclos: %f",CLOCKS_PER_SEC);
    return 0;
}
