#include <stdio.h>
int maximo(int a, int b);

int main(){
    int a, b;
    printf("Escribe un numero ");
    scanf("%d",&a);
    printf("Escribe un segundo numero ");
    scanf("%d",&b);

    int max= maximo(a,b);
    printf("El numero maximo es %d\n",max);
}
int maximo(int a, int b){
    int max;
    if(a>b){
        max=a;
    }
    else if(a==b){
        max=0;
    }else{
        max=b;
    }
    return max;
}