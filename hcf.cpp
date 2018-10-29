#include<stdio.h>
int main()
{
	int m,n,a,b,t;
	printf(" enter the 1st no. :");
	scanf("%d" , &m);
	printf(" enter the 2nd no. :");
	scanf("%d" , &n);
	if(m>n && m%n==0)
	printf("%d is the lcm of both no.s" , m);
	else
	if(n>m && n%m==0)
	printf("%d is the lcm of both no.s" , n);
	for(a=2;a<=n/2;a++)
	{
		
	}
}
