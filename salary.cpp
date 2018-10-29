#include<stdio.h>
int main()
{
	int s,da,hra,gs;
	printf("enter the basic salary:" , s);
	scanf("%d" , &s);
	da=(40*s)/100;
	hra=(20*s)/100;
	printf("\ndearness allowance:%d" , da);
	printf("\nhouse rent allowance:%d" , hra);
	gs=s+da+hra;
	printf("\ngross salary:%d" , gs);
}
