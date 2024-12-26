#include <stdio.h>
struct empleado
{
    char nombre[50];
    char sexo[50];
    double sueldo;
};
int main(){
    struct empleado emp[4];
    double menos=0;
    int posMenor;
    printf("EMPRESA DATACIC\n");
    for(int i=0;i<5;i++){
        printf("\nEmpleado numero: %d\n",(i+1));
    printf("Escribe el nombre del empleado: ");
    scanf("%s",emp[i].nombre);

    printf("Escribe el sexo del empleado: ");
    scanf("%s",emp[i].sexo);

    printf("Escribe el sueldo: ");
    scanf("%lf",&emp[i].sueldo);

    if(i==0){
        menos= emp[0].sueldo;
    }
    if(menos>=emp[i].sueldo){
        menos=emp[i].sueldo;
        posMenor=i;
    }
    }


    printf("\nSUELDO MENOR\n");
    printf("\nNombre: %s",emp[posMenor].nombre);
    printf("\nSexo: %s",emp[posMenor].sexo);
    printf("\nSueldo: &%lf\n",emp[posMenor].sueldo);
    return 0;
}