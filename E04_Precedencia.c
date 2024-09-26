#include <stdio.h>
int main(){
    double a=5; //d
    double b = 2;
    double c = 1; //4
    double d = 4;
    puts("PRECEDENCIA DE OPERADORES 2");
    printf("= %f\n", (a+(b/(c/(c+(b/(b-(c/d))))))));
    return 0;
}

