#include<stdio.h>
int main()
{
	int a,b;
	printf("enter your no. :" , a);
	scanf("%d" , &a);
    b=a%2;
	if (b==0)
	printf("the no. is even.");
	else 
	printf("the no. is odd.");
}
