#include <stdio.h>
int main(){
    int i=1;
    while(i<1000){
        if(i%3 == 0){
            printf("%d, ",i);
        }
        i++;
    }
    printf("Fin del programa");
    return 0;
}

