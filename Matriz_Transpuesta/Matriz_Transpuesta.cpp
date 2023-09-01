#include <iostream>
#include <conio.h>

main()
{
	int x[72][72], z[55][55], i, j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ingrese un numero: ");
			scanf("%d", &x[i][j]);
		}
	}printf("\n");
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", x[i][j]);
		}printf("\n");
	}
	printf("\n\n");
	printf("La matriz Transpuesta es: \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d ", x[j][i]);
	}printf("\n");
}

}
