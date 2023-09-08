#include <stdio.h>
int main(){
	unsigned int i=1;
	char * c=(char *) &i;
	printf("%d\n",i);
	printf("%s\n",c);
	if(c=="0"){
		printf("Little endian\n");
		}else{
			printf("Big endian\n");
			}
			return 0;
	}
