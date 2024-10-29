#include <stdio.h>
#include <string.h>
int main(){
    char cad[20];
    char seg[20];
    char copia[20];
    printf("Escribe la primera palabra ");
    gets(cad);
    printf("Escribe la segunda palabra ");
    gets(seg);
    strcpy(copia,cad); //Destino,origen
    strcpy(cad,seg);
    strcpy(seg,copia);
    printf("Palabra 1: %s\n",cad);
    printf("Palabra 2: %s\n",seg);
    return 0;
}

