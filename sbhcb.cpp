#include<stdio.h>
#include<math.h>
int main()
{
	long n, tn;
	int r, count=0;
	printf("Enter the no. to check if it is an armstrong no. : ");
	scanf("%d" , &n);
	tn=n; //tn =n humne use kiya taaki jo value n ki change ho jaa rhi hai woh save ho jaaye kisi variable mein
	while(n>0)
	{
		++count;
		n=n/10;
	}
	
	n=tn; // yahaan par purane value ki use ki gyi..
	long sum=0;
	while(n>0)
	{
		r=n%10;
		sum+=pow(r,count);
		n=n/10;
	}
	
	if(tn==sum)
		printf("\n Number is an Armstrong Number. ");
	else
		printf("\n Number is not an Armstrong Number. ");
}
