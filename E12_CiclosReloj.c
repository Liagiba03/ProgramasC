#include <stdio.h>
#include <x86intrin.h>
#include <time.h>

int main()
{
    unsigned long long start, end;
    clock_t startReloj, endReloj;
    double ciclosTotales;
    double tiempoUsadoCPU;
    
    start = __rdtsc(); // Guarda el valor inicial del contador de ciclo de reloj
    startReloj = clock(); //Inicia el tiempo desde donde se inicia a ejecutar
    
    char comando[100];
    printf("Escribe el programa que deseas abrir: ");
    scanf("%s",comando);
    system(comando); // Ejecutar algun programa desde la terminal
    
    end = __rdtsc(); // Lee el valor final del contador de ciclo de reloj
    endReloj = clock(); //Finaliza el tiempo en donde terminó de ejecutar
    
    ciclosTotales = (double)(end - start); // Calcula el número total de ciclos de reloj
    tiempoUsadoCPU = ((double) (end - start))/ CLOCKS_PER_SEC;
    
    printf("El programa %s tardó %.0f ciclos de reloj en ejecutarse\ny se tardó %f segundos\n",comando,ciclosTotales,tiempoUsadoCPU);
    
    return 0;
}
