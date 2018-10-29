#include<stdio.h>
int main()
{
	long n;
	int r,count;
	printf("enter the no. till which you want the armstrong no.s : ");
	scanf("%d" , &n);
	
	while(n>0)
	{
	 for(count=0;r!=0;count++;)
	 {
	 	r=n%10;	 	
	 	n=n/10;
	 }
	 printf("%d" , count);
	}
}
