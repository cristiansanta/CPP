#include <stdio.h>
#include <stdlib.h>

int fibo(int i)
{
	int c=1, a=0, b=1;
	
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
	

	for(int n=3;n<=i;n++)
    {
        c=a+b;
        a=b;
        b=c;
    printf("%d, ", c);
    }
    return 0;
}



int main(){
	
   int i;
    printf("Serie Fibonacci: ");
    scanf("%d", &i);
    printf("",fibo(i));    
	return 0;
}
