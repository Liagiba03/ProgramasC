#include <stdio.h>

int factorial(int n);
int main(){
	int n;
	printf("FACTORIAL DE NUMERO\n");
	printf("Escribe un numero ");
	
	scanf("%d",&n);
	int fac= factorial(n);
	printf("%d\n",fac);
	system("pause");
	return 0;
}

int factorial(int n){
	if(n<1){
		return 1;
	}
	return n*factorial(n-1);
}
