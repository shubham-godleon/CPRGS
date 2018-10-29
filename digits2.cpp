#include<stdio.h>
int main()
{
	long n;
	int r;
	printf("\n Enter the no. : ");
	scanf("%ld" , &n);
	
	while(n>0)
	{
		r=n%10;
		printf("%5d", r);
		n=n/10;
	}
	
}
