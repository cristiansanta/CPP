#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, cont=0;
	printf("Ingrese un numero: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
       if(n%i == 0){
       	cont++;
	   }		
	}if(cont==2)
	   { printf("ES PRIMO.");
		   }else{ printf("No es primo.");
		   }
	
return 0;	
}

