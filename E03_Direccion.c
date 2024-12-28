#include <stdio.h>
int main(){
    int x=17,y;
    int *p;
    p=&x;
    printf("EL valor de x es: %d\n",*p);
    y=*p+3;
    printf("EL valor de y es: %d\n",y);
    return 0;
}