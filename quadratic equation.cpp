#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,r1,r2; 
	printf("coefficient of 2nd degree variable:" , a);
	scanf("%d" , &a);
	printf("coefficient of 1st degree variable:" , b);
	scanf("%d" , &b);
	printf("constant term:" , c);
	scanf("%d" , &c);
	printf("your quadratic equation is:");
	printf("%d" , a);
	printf("x^2 + ");
	printf("%d" , b);
	printf("x + ");
	printf("%d" , c);
	d=(pow(b,2))-(4*a*c);
	printf("\ndiscriminant: %d" , d);
	if (d>0)
	printf("\nroots are real and unique.");
	else
	if (d<0)
	printf("\nroots are unreal.");
	else
	printf("\nroots are real and equal.");
	r1= ((-b) + pow(d,0.5))/2*a;
	r2= ((-b) - pow(d,0.5))/2*a;
	printf("\nroot 1 = %d" , r1);
	printf("\nroot 2 = %d" , r2);

}
