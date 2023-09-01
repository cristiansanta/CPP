#include <stdio.h>
#include <stdlib.h>

int main(){

int i, c=1, a=0, b=1;
    printf("Serie Fibonacci: ");
    scanf("%d", &i);
    if(i==1)
	{
		printf("0");return 0;
	}
else if(i==2)
	{
		printf("0, 1");return 0;
	}    
	else{
		printf("0, 1, ");
	}
    for(int n=2;n<i;n++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%i, ", c);
    }
    return 0;
}
