#include<stdio.h>
int main()
{
	int n,a;
	char b='y';
	printf("enter the no.:");
	scanf("%d" , &n);
	for(a=2;a<=n/2;a++)
	{
		if(n%a==0)
		{
			b='n';
		}
	}
	if(b=='y')
	printf("%d is a prime no.", n);
	else
	printf("the no. is a composite no.");
	
}
