/*Crear matriz 2X2 llenarla y luego pasar los valores a otra matriz*/
#include <iostream>
#include <conio.h>

main()
{ int n[100][100], m[100][100];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Ingrese valor [%i][%i]: ", i,j);
			scanf("%d", &n[i][j]);
		}
	}printf("\n");
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ", n[i][j]);
		}printf("\n");
	}
				printf("\n\nnueva matriz: \n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			m[i][j] = n[i][j];
			printf("%d ", m[i][j]);
		}printf("\n");
	}
}
