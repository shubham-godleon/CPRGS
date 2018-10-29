#include<stdio.h>
int main()
{
	int a,s,p=1;
	printf("enter an integer : ");
	scanf("%d" , &a);
	for(s=1;s<=a;++s)
	{
	p=p*s;
	 }
	 printf("factorial of the no. is: %d" , p);
}
