/*Mostrar la diagonal principal de una matriz 3X3*/
#include <iostream>
#include <stdlib.h>


main()
{
	int M[100][100], i, j;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{  // printf("[%d][%d]: ", i,j);
			M[i][j] = 1+rand()%90;
			printf("%i   ", M[i][j]);
			
			if(i!=j)
			{
				M[i][j] = 0;
			}
		}printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	printf("\n\n");
	for(int i=0;i<3;i++)   //imprime la matriz diagonal con ceros
	{
		for(int j=0;j<3;j++)
		{
			printf("%i    ", M[i][j]);
		}printf("\n");
	}
	
	for(int i=0;i<3;i++)//imprime numeros de la diagonal principal
	     {
	     	for(int j=0;j<3;j++)
	     	{
	     		if(i==j)
			{
				printf("\n%i", M[i][j]);
			}
			}
		 }
	     
}
