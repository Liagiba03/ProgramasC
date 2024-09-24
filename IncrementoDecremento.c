#include <stdio.h>
#include <stdlib.h>

int main(){
    int c = 5;

    printf("c : %d\n", c);
    printf("c++ : %d\n", c++); //Imprime 5 y despues lo incrementa
    printf("c : %d\n", c);

    int d = 10;
    printf("d : %d\n", d);
    printf("--d : %d\n", --d); //Primero lo decrementa y despues lo imprime
    printf("d : %d\n", d);

    system("Pause");
    return 0;
}