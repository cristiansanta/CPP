#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, x=0, y=1, z=1;
    printf("Fibonacci: ");
    scanf("%i", &num);
    for(i=1;i<=num;i++)
    {
       z=x+y;
       x=y;
       y=z;
       printf("%d, ",z);
    }
    return 0;
}
