#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter the first no.: ");
	scanf("%d" , &a);
	printf("\n enter the second no.: ");
	scanf("%d" , &b);
	printf("\n enter the third no.: ");
	scanf("%d" , &c);
	//now comparison starts
	if(a==b && b==c)
	{
		printf("\n all the numbers are equal.");
}
		if(a>b && a>c)
		{
			printf("\n %d is the greatest no." , a);
			if(b>c)
			{
				printf("\n %d is the 2nd greatest no." , b);
				printf("\n %d is the smallest no." , c);
		}
				else
				{
				printf("\n %d is the 2nd greatest no." , c);
				printf("\n %d is the smallest no." , b);
				}
		
		}
		if(c>a && c>b)
		{
			printf("\n %d is the greatest no." , c);
			if(a>b)
			{
				printf("\n %d is the 2nd greatest no." , a);
				printf("\n %d is the smallest no." , b);
		}
				else
				{
				printf("\n %d is the 2nd greatest no." , b);
				printf("\n %d is the smallest no." , a);
				}
	
		}
		if(b>a && b>c)
		{
			printf("\n %d is the greatest no." , b);
        if(a>c)
        {
			printf("\n %d is the 2nd greatest no." , a);
			printf("\n %d is the smallest no." , c);
	}
			else
			{
				printf("\n %d is the 2nd greatest no." , c);
				printf("\n %d is the smallest no." , a);
			}
		}
	}

