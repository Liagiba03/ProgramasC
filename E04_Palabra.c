#include <stdio.h>
#include <string.h>
int main(){
    int len;
    int lon;
    char cad[20];
    printf("Introduce la palabra\n");
    gets(cad);
    len = strlen(cad);
    for(int i=1; i<=len ;i++){
        for(int j=1; j<=len;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

