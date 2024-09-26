#include <stdio.h>
int main(){
    double a = 1;
    double b= 3;
    double c = 5;
    double d = 30;
    double e = 23;
    puts("PRECEDENCIA DE OPERADORES");
    printf("= %f \n", (a/b+b/c+((a/d)/(e/d))));
    return 0;
}


