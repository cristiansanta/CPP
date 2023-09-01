#include <stdio.h>
#include <stdlib.h>

int SumFact(int d1, int d2, int d3, int ac, int ab, int ad, long Total)
{
	for(int i=1; i<=d1; i++)
	{
		ac=ac*i;		
    }
    for(int n=1; n<=d2; n++)
    {
    	ab*=n;
	}
	for(int k=1; k<=d3; k++)
	{
		ad*=k;
	}
	Total=ac+ab+ad;
	printf("La suma de los Factoriales es: %d", Total);
}


int main()
{
	int d1, d2, d3, ac=1, ab=1, ad=1; long Total;
	printf("Enter the first number: ");
	scanf("%i", &d1);
	printf("Enter the second number: ");
	scanf("%i", &d2);
	printf("Enter the third number: ");
	scanf("%i", &d3);
	printf(" ", SumFact(d1, d2, d3, ac, ab, ad, Total));	
	return 0;
}
