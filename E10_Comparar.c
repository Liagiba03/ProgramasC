#include <stdio.h>
int main(){
    printf("Palabra palindroma\n");
    char pal[30];
    char reves[30];
    int lon, res;
    printf("Escribe la palabra ");
    scanf("%s",pal);
    lon = strlen(pal);  
    int j=0;  
    for(int i=lon-1;i>=0;i--){
        reves[j]=pal[i];
        j++;
    }
    res= strcmp(pal,reves);
    if(res==0){
        printf("%s es una palabra palindroma ",pal);
    }else{
        printf("%s no es una palabra palindroma ",pal);
    }
    printf("\nreves: %s\n",reves);

    return 0;
}

