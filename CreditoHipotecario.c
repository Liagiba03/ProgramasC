#include <stdio.h>
int main(){
    int antiguedad;
    int sueldoM;
    printf("INGRESA LOS AÑOS DE ANTIGUEDAD EN TU ACTUAL TRABAJO\n");
    scanf("%d",&antiguedad);
    printf("INGRESA TU SUELDO MENSUAL\n");
    scanf("%d",&sueldoM);
    if(antiguedad>5){
        if(((sueldoM*100)/10)>1000){
            printf("PUEDES TENER UN CREDITO HIPOTECARIO\n");
        }
    }
    return 0;
}

