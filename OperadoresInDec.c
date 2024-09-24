#include <stdio.h>
int main(){
    int x = 5;
    int y = 10;
    int z = ++x * y--;
    printf("x : %d\n",x); //6
    printf("y : %d\n",y); //9
    printf("z : %d\n",z); //6*10
    return 0;
}

