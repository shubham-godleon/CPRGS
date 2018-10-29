#include<stdio.h>
int main()
{
	int m,a;
	printf(" enter the first no. :");
	scanf("%d" , &m);
	for(a=1;a<=m;a++)
	{
		if(m%a==0)
		{
			printf("\n%d" , a);
			printf(" is a factor of %d." , m);
		}
	}
}
