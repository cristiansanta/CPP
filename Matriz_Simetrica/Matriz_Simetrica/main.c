#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100][100],i,j,a,b;

    printf("Numero Filas: ");
    scanf("%d", &a);
    printf("Numero Columnas: ");
    scanf("%d", &b);
    i=0;
    while(i<a)
    {
        j=0;
        while(j<b)
        {
            printf("Llenar Matriz: ");
            scanf("%d",&num[i][j]);
            j++;
        }
        i++;
    }
printf("\n");
    for(int i=0;i<a;i++)  //VISUALIZAR MATRIZ
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ", num[i][j]);
        }printf("\n");
    }

    if(i==j)
    {
        printf("MATRIZ SIMETRICA\n");
    }else{
    printf("MATRIZ ASIMETRICA\n");}

    return 0;
}
