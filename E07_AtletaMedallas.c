#include <stdio.h>
struct atletaInfo
{
    char deporte [50];
    char nombre [50];
    char pais [50];
    int numMedallas;
};

int main(){
    struct atletaInfo atle[10];
    int masMedallas, posMayor;

    for(int i=0; i<10;i++){
    printf("\nAtleta numero: %d\n",(i+1));
    printf("Ingresa el deporte: ");
    scanf("%s",atle[i].deporte);

    printf("Ingresa el nombre del atleta: ");
    scanf("%s",atle[i].nombre);

    printf("Ingresa el pais de origen: ");
    scanf("%s",atle[i].pais);

    printf("Ingresa el numero de medallas: ");
    scanf("%d",&atle[i].numMedallas);

if(i==0){
        masMedallas= atle[0].numMedallas;
    }
    if(masMedallas<=atle[i].numMedallas){
        masMedallas=atle[i].numMedallas;
        posMayor=i;
    }
    }
    printf("\nATLETA CON MAS MEDALLAS\n");

    printf("Nombre: %s",atle[posMayor].nombre);
    printf("\nDeporte: %s",atle[posMayor].deporte);
    printf("\nPais: %s",atle[posMayor].pais);
    printf("\nMedallas: %d\n",atle[posMayor].numMedallas);
    return 0;
}