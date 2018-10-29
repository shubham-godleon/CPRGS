#include<stdio.h>
int main()
{
	int n,a;
	printf("enter the no. for the multiplication table : ");
	scanf("%d" , &n);
	printf("\nthe multiplication table is as follows : ");
	for(a=1;a<=10;++a)
	{
		printf("\n");
		printf("%d * " , n);
		printf("%d = " , a);
		printf("%d" , n*a);
	}
	
}
