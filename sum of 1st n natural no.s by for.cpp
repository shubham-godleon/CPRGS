#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the no. till which you want the sum : ");
scanf("%d" , &n);
for(i=0;i<=n;++i)
{sum+=i;}
printf("\n the sum of 1st n natural no.s: %d" , sum );
}
