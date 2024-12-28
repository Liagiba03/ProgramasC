#include <stdio.h>
struct fraccion{
    int den;
    int num;
};
int suma(struct fraccion mul1, struct fraccion mul2);
int resta(struct fraccion mul1, struct fraccion mul2);
int division(struct fraccion mul1, struct fraccion mul2);
int main(){
    struct fraccion frac1;
    struct fraccion frac2;
    printf("\nFraccion 1\n");
    printf("Ingresa numerador(arriba): ");
    scanf("%d",&frac1.num);
    printf("Ingresa denominador(debajo): ");
    scanf("%d",&frac1.den);

    printf("\nFraccion 2\n");
        printf("Ingresa numerador(arriba): ");
    scanf("%d",&frac2.num);
    printf("Ingresa denominador(debajo): ");
    scanf("%d",&frac2.den);

    suma(frac1,frac2);
    resta(frac1,frac2);
    division(frac1,frac2);
    return 0;
}
int suma(struct fraccion mul1, struct fraccion mul2){
    int nom = (mul2.den*mul1.num)+(mul1.den*mul2.num);
    int den = mul1.den*mul2.den;
    printf("\nSuma: %d/%d",nom,den);
    return 0;
}
int resta(struct fraccion mul1, struct fraccion mul2){
    int nom = (mul2.den*mul1.num)-(mul1.den*mul2.num);
    int den = mul1.den*mul2.den;
    printf("\nResta: %d/%d",nom,den);
    return 0;
}
int division(struct fraccion mul1, struct fraccion mul2){
    int nom = mul1.num*mul2.den;
    int den = mul1.den*mul2.num;
    printf("\nDivision: %d/%d",nom,den);
    return 0;
}