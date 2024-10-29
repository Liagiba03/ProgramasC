#include <stdio.h>
#include <string.h>
int main(){
    int len;
    char origen[]= "Origen";
    char destino[7];
    strcpy(destino,origen);
    printf("Destino: %s",destino);
    return 0;
}

