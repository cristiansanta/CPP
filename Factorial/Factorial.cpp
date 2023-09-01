#include <stdio.h>
#include <stdlib.h>

int main(){

    int d, ac=1;
	printf("Enter a number: ");
	scanf("%i", &d);
	for(int i=1; i<=d; i++)
	{
		ac=ac*i;
		
    }	printf("%d\n", ac);
	
}

