#include <stdio.h>
int main(){
    int HST;
    int PH;
    int SalSem;
    printf("Ingresa las horas semanales trabajadas\n");
    scanf("%d",&HST);
    printf("Ingresa el precio por hora\n");
    scanf("%d",&PH);
    if(HST <= 40){
        SalSem = HST*PH;
    }
    else{
        SalSem = (40*PH+(PH*1.5*(HST-40)));
    }
    printf("SalarioSemanal: %d\n",SalSem);
    return 0;
}

