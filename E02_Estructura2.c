#include <stdio.h>
struct CD{
    char titulo[100];
    char artista[50];
    int numCanciones;
    int anio;
    double precio;
};
int main(){
    struct CD cd1;
    printf("Ingresa el titulo: ");
    scanf("%s",cd1.titulo);

    printf("Ingresa el artista: ");
    scanf("%s",cd1.artista);

    printf("Ingresa el numero de canciones del artista: ");
    scanf("%d",&cd1.numCanciones);

    printf("Ingresa el año de la cancion: ");
    scanf("%d",&cd1.anio);

    printf("Ingresa el precio: ");
    scanf("%lf",&cd1.precio);

    printf("\nTITULO: %s",cd1.titulo);
    printf("\nARTISTA: %s",cd1.artista);
    printf("\nNUM DE CANCIONES: %d",cd1.numCanciones);
    printf("\nAÑO: %d",cd1.numCanciones);
    printf("\nPRECIO: %lf\n",cd1.precio);
    return 0;
}
