#include <stdio.h>
int main(){
    int var =1;
    int con = 1;
    //Es equivalente var = var+1
    printf("%d\n",var++);
    printf("%d\n",var);
    //Es equivalente a con = con -1
    printf("%d\n",con--);
    printf("%d\n",con);
    return 0;
}

