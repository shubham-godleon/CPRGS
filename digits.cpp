#include<stdio.h>
int main()
{
	int a,b,c,d;
	char x='y';
	printf("enter the no. : ");
	scanf("%d" , &a);
	for(b=10;b<=a;b*=10)
	{
	c=a%b;
    if(c>10)
    {
    d=c/b;
    x='n';
	}	
}}


