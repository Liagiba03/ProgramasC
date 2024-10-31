#include <stdio.h>
#include <string.h>
int main(){
    char p1[20];
    char p2[30];
    int len;
    printf("Escribe la primera palabra");
    gets(p1);
    printf("Escribe la segunda palabra");
    gets(p2);
    len = strlen(p1);
    for(int i=0;i<len;i++){
        strcat(p1,p2);
    }
    printf("\n%s",p1);
    return 0;
}

