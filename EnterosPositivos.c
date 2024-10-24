#include <stdio.h>
int main(){
    int i =100;
    while(i>0){
        if(i%7==0){
            i--;
        }else{
            printf("%d, ",i);
            i--;
        }
    }
    return 0;
}

