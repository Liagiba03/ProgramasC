#include <stdio.h>
int factorial(int n);
int main(void){
    int n;
    printf("FACTORIAL DE UN NUMERO\n");
    printf("Escribe un numero ");
    scanf("%d",&n);
    int fac= factorial(n);
    printf("Factorial de %d: %d\n",n,fac);
    return 0;
}

int factorial(int n){
    if (n<1)
    {
        return 1;
    }
    return n*factorial(n-1);
    
}