#include <stdio.h>
struct empleado
{
    char nombre[50];
    char sexo[50];
    int sueldo;
};

int main(){
    struct empleado emp;
    printf("EMPRESA DATACIC\n");
    printf("Escribe el nombre del empleado: ");
    gets(emp.nombre);

    printf("Escribe el sexo del empleado: ");
    gets(emp.sexo);

    printf("Escribe el sueldo: ");
    scanf("%d",&emp.sueldo);

    printf("\nNombre: %s",emp.nombre);
    printf("\nSexo: %s",emp.sexo);
    printf("\nSueldo: &%d\n",emp.sueldo);
    return 0;
}