#include <stdio.h>
struct atomo
{
    int hidrogeno;
    int oxigeno;
    char nombre[15];
};
int main(){
    struct atomo agua[4];
    agua[0].hidrogeno= 2;
    agua[0].oxigeno=1;
    printf("Escribe el nombre: ");
    scanf("%s",agua[0].nombre);

    printf("Nombre: %s",agua[0].nombre);
    return 0;
}