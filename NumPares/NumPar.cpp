#include <stdio.h>
#include <stdlib.h>

int main(){
	int f, C=0, n=1;
	printf("Ingrese numero: ");
	scanf("%i", &f);
	
	while(n<=f)
	{ 
	   if(n%2 == 0){ printf("%i\n", n);
                  	C++;
	               } 
	 n++;
	}printf("Hay %d numeros pares: ", C);
return 0;
}
