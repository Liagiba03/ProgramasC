#include <stdio.h>
#include <string.h>
int validar(char c);
int main(){
    char c;
    int estado;
    while (estado==1){
    
        printf("Escribe un caracter ");
        scanf("%c",&c);
        
        estado = validar(c);
        printf("Estado: %d\n",estado);
    }
   
    return 0;
}

int validar(char c){
    int estatus;
    if(c == ' '){
        printf("Espacio\n");
        estatus=0;
    }else if(c=='\n'){
        printf("Salto\n");
        estatus=0;
    }else{
        estatus=1;
    }
    printf("El caracter es: %c\n",c);
    return estatus;
}