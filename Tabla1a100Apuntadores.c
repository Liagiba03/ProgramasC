#include <stdio.h>
#include <x86intrin.h>

int main(){
    unsigned long long start, end;
    double ciclosTotales;
    start = __rdtsc(); // Guarda el valor inicial del contador de ciclo de reloj
    printf("Tablas 1 a 100");
    int res=1, num, n;
    int * resul=&res;
    int * numero =&num;
    int * mul =&n;
    for( *mul=1; *mul<=100;*mul+=1){
        printf("\nTabla del %d\n",*mul);
        for(*numero=1; *numero<=10;*numero+=1){
            *resul=*numero*(*mul);
            printf("%d * %d = %d\n",n,num,res);
        }
    }
    end = __rdtsc(); // Lee el valor final del contador de ciclo de reloj
    ciclosTotales = (double)(end - start); // Calcula el número total de ciclos de reloj
    printf("El programa tardó %.0f ciclos de reloj en ejecutarse\n",ciclosTotales);
return 0;
}