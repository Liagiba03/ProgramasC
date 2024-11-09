#include <stdio.h>
int main(){
    char palabra[30];
    char copia[30];
    int i, lon, b;
    printf("Conteo de palabras\n");
    printf("Escribe la palabra ");
    scanf("%s",palabra);
    lon = strlen(palabra);
    b=0;
    //Para ver cuantas palabras hay 
    for(i=0;i<lon;i++){
        for(int j=1;j<lon;j++){
            if(palabra[i]==palabra[j]){
                b++;
            }
        }

        //printf("1:%c = %d\n",copia[i],i);
    }
    printf("\ncopy:%s\n",copia);
    b=0;
    //Para ver cantidad de palabras
    for(i=0;i<lon;i++){
        for(int j=0;j<lon;j++){
            if(palabra[i]==palabra[j]){
                b++;
            }
        }
        if(b!=0){
            printf("%c = %d\n",palabra[i],b);
        }
        b=0;
    }
    return 0;
}