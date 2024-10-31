#include <stdio.h>
#include <string.h>
int main(){
    char cad1[30];
    char cad2[30];
    int res=0;
    printf("Escribe palabra 1 ");
    gets(cad1);
    printf("Escribe la palabra 2 ");
    gets(cad2);
    res=strcmp(cad1,cad2);
    if(res==0){
    printf("Las palabras son iguales");
    }else if(res>0){
        printf("Palabra 1 es mayor a palabra 2");
    }else if(res<0){
        printf("Palabra 1 es menor a palabra 2");
    }
    return 0;
}

