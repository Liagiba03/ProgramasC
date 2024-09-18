#include <stdio.h>
int main(){
    int suma = 5+2; // =7
    printf("%d\n",suma);
    int resta = suma - 3; // =4
    printf("%d\n",resta);
    int mult = suma * resta; // = 28
    printf("%d\n",mult);
    int iDiv = 20/8; // = 2
    printf("%d\n",iDiv);
    int mod = 20 % 8; // = 4 
    printf("%d\n",mod);
    int a = 2;
    ++a; //a = 3
    printf("a preIncremento: %d\n",a);
    a++; //a=4
    printf("a postIncremento: %d\n",a);
    int b = a++; //b=4, a=5
    printf("b: %d , a: %d\n",b,a);
    int c = ++b; //c =5, b = 5
    printf("c: %d , b: %d\n",c,b);
    return 0;
}
