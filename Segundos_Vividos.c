#include <stdio.h>
int main(){
    printf("Cantidad de segundos que se han vivido \n");
    double mesesEnAnios=9/365;
    double anios = 20+mesesEnAnios;
    double segundos= anios*365*24*60*60;
    printf("Años vividos: %f\n ", anios);
    printf("Segundos vividos: %f \n",segundos);
    return 0;
}


