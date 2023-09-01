#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100][100],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Ingrese #: ");
            scanf("&d", &num[i][j]);
        }
    }printf("\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d", num[i][j]);
        }printf("\n");
    }
    return 0;
}

