#include <stdio.h>
struct atletaInfo
{
    char deporte [50];
    char nombre [50];
    char pais [50];
    int numMedallas;
};

int main(){
    struct atletaInfo atle;
    printf("Ingresa el deporte: ");
    scanf("%s",atle.deporte);

    printf("\nIngresa el nombre del atleta: ");
    scanf("%s",atle.nombre);

    printf("\nIngresa el pais de origen: ");
    scanf("%s",atle.pais);

    printf("\nIngresa el numero de medallas: ");
    scanf("%d",&atle.numMedallas);

    printf("Nombre: %s",atle.nombre);
    printf("\nDeporte: %s",atle.deporte);
    printf("\nPais: %s",atle.pais);
    printf("\nMedallas: %d\n",atle.numMedallas);
    return 0;
}