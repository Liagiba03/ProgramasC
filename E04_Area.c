#include <stdio.h>
#include <math.h>
float area(float a, float b, float c);
int main(){
    float a, b, c, ar;
    printf("AREA DE UN TRIANGULO\n");
    printf("Introdice el lado A ");
    scanf("%f",&a);
    printf("Introdice el lado B ");
    scanf("%f",&b);
    printf("Introdice el lado C ");
    scanf("%f",&c);
    ar= area(a,b,c);
    printf("EL area del triangulo es: %f\n",ar);
    return 0;
}

float area(float a, float b, float c){
    double p;
    p=(a+b+c)/2;
    float aTot= sqrt(p*(p-a)*(p-b)*(p-c));
    return aTot;
}