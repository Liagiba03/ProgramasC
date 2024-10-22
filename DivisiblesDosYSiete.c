#include <stdio.h>
int main(){
    int i=1;
    while(i<1000){
        if(i%2==0){
            if(i%7==0){
                printf("%d, ",i);
            }
        }
        i++;
    }
    printf("Fin");
    return 0;
}

