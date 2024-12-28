#include <stdio.h>
int main(){
    int dato;
    int * punt;
    punt= &dato;
    printf("Dato: %p",&dato);
    printf("\nPunt: %d\n",*punt);
    return 0;
}