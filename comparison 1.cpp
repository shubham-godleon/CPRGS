#include<stdio.h>
int main()
{
  int a,b;
  printf("enter 1st no. :=" , a);
  scanf("%d" , &a);//%d is used tom accept an integer in its place during inputs.
  printf("enter 2nd no. :=" , b);
  scanf("%d" , &b);
  if (a==b)
  printf("a and b are equal.");
  else
     if (a>b)
     printf("a is greater than b.");
     else
     printf("a is less than b.");  
}
