#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the year:" , a );
	scanf("%d" , &a);
	b=a%100;
	c=a%400;
	d=a%4;
	if(b==0 && c==0)
	printf("the year is a leap year.");
    if(b==0 && c!=0)
    printf("the year is not a leap year.");
	else
	if (d==0 && b!=0 && c!=0)
	printf("the year is a leap year.");
}
