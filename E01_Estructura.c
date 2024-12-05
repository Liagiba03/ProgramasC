#include <stdio.h>
struct CD{
    char titulo[100];
    char artista[50];
};
int main(){
    struct CD cd1;
    printf("Ingresa el titulo: ");
    scanf("%s",cd1.titulo);

    printf("Ingresa el artista: ");
    scanf("%s",cd1.artista);

    printf("\nTITULO: %s",cd1.titulo);
    printf("\nARTISTA: %s",cd1.artista);
    return 0;
}
