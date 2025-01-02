#include <stdio.h>
int main(){
    char cadena[100];
    printf("Un int ocupa %d bytes\n",sizeof(int));
    printf("Un char ocupa %d bytes\n",sizeof(char));
    printf("Un float ocupa %d bytes\n",sizeof(float));
    printf("Un double ocupa %d bytes\n",sizeof(double));
    printf("Un caadena ocupa %d bytes\n",sizeof(cadena));
    return 0;
}