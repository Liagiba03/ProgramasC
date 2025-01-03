#include <stdio.h>

int main(){
    unsigned int n =1;
    char * c =(char *) &n;
    //SI es little endian será guardado en memoria como 
    //01 00 00 00 , entonces c = 1
    if(*c ==0){
        printf("Little endian\n");
    }
    //Si es big endian, n será guardado en memoria como
    // 00 00 00 01, entonces c = 0
   else{
    printf("Big endian\n");
    
}
    return 0;
}