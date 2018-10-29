#include<stdio.h>
int main()
{
	int a=0,b,n,e=0,c=0,f=-1;
	printf("enter the no. of numbers for which you want the sum: ");
	scanf("%d" , &n);
	for(b=0;b<n;++b)
	{
		e=e+2;
		a+=e;
		f=f+2;
		c+=f;
	}
	printf("\nthe sum of first n even natural no.s : %d " , a);
	printf("\nthe sum of first n odd natural no.s : %d " , c);
}
