#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the no. till which you want the multiples of 5  : " );
	scanf("%d" , &a);
	for(b=1;b<=a;b++)
	{
		if(b%5==0)
			printf("%5d" , b);
	}
}
