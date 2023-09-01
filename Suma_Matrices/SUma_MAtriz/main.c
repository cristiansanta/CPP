#include <stdio.h>
#include <conio.h>

int main()
{
    int num[100][100],num1[100][100],numT[100][100], i, j;

    i=0;
    while(i<=2)
    { j=0;
     while(j<=2)
     {
         printf("Ingrese numero: ");
         scanf("%d", &num[i][j]);
         j++;
     }
     i++;
    }

printf("\n");
    i=0;            //Visualizar MATRIZ
    while(i<=2)
    { j=0;
        while(j<=2)
        {
            printf("%i ", num[i][j]);
            j++;
        }printf("\n");
        i++;
    }
    printf("\n   +\n");
    for(int i=0;i<3;i++)    //Matriz Aleatoria 1+rand()%90
    {
        j=0;
        while(j<=2)
        {
            num1[i][j] = 1+rand()%99;

            j++;
        }
    }
    printf("\n");
    i=0;     //Visualiza Matriz ALEATORIA
    while(i<3)
    {  j=0;
        while(j<3)
        {
            printf("%i ", num1[i][j]);
            j++;
        }printf("\n");
        i++;
    }
printf("\nResultado de la suma de las 2 matrices es: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            numT[i][j] = num[i][j] + num1[i][j];
            printf("%d ", numT[i][j]);
        }printf("\n");
    }
    return 0;
}
