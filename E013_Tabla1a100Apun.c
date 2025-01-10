#include <stdio.h>
#include <x86intrin.h>

int main(){
    unsigned long long start, end;
    double ciclosTotales;
    start = __rdtsc(); // Guarda el valor inicial del contador de ciclo de reloj
    printf("Tablas 1 a 100");
    int res=1, num, n;
    int * resul=&res;
    for(int i=1; i<=100;i++){
        printf("\nTabla del %d\n",(i+1));
        for(int j=1; j<=10;j++){
            *resul=i*j;
            printf("%d * %d = %d\n",i,j,res);
        }
    }
    end = __rdtsc(); // Lee el valor final del contador de ciclo de reloj
    ciclosTotales = (double)(end - start); // Calcula el número total de ciclos de reloj
    printf("El programa tardó %.0f ciclos de reloj en ejecutarse\n",ciclosTotales);
return 0;
}