#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, num[72][72],num2[72][99],numT[100][100];
    for(i=0;i<3;i++)//Matriz numero 1
    {
        for(j=0;j<3;j++)
        {
            num[i][j] = 1+rand()%90;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", num[i][j]);
        }printf("\n");
    }

    printf("\n");
    for(i=0;i<3;i++)//Matriz numero 2
    {
        for(j=0;j<3;j++)
        {
            num2[i][j] = 1+rand()%10;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ", num2[i][j]);
        }printf("\n");
    }

printf("\n");
    for(i=0;i<3;i++)     //PRODUCTO FINAL MATRICES
    {
        for(j=0;j<3;j++)
        {
            numT[i][j] = num2[i][j] * num[i][j];
            printf("%i ", numT[i][j]);
        }printf("\n");
    }
    return 0;
}
