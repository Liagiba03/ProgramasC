#include <stdio.h>
int main(void){
    int i,n;
    char dig;
    char * buffer;
    printf("Teclea la longitud de la cadena: ");
    scanf("%d",&i);
    buffer =(char*)malloc((i+1)*sizeof(char));
    if(buffer==NULL) exit(1);
    for(n=0;n<i;n++){
        printf("Teclea el digito numero %d: ",(n+1));
        scanf("%s",&buffer[n]);
    }
    buffer[i]='\0';

    printf("Random string: %s\n",buffer);
    free(buffer);

    return 0;
}