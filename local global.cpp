#include<stdio.h>
int g=100; // global variable accessible throughout the program
void func1()
{
	auto int l=200; // local to function func1 not accessible outsside the function
	printf("\n global:%d" , g );
	printf("\n local:%d" ,  l );
{
	int b=300; //local to block not accessible outside the block
	printf("\n local:%d" ,  l );
	printf("\n global:%d" , g );
	printf("\n blocklevel:%d" , b);
}
    //printf("\n blocklevel:%d" , b);
}

	int main()
	{
		
	int lm=400; //local to function main
	func1(); //callling of function
	//printf("\n local:%d" ,  l ); //error not accessible
	printf("\n global:%d" , g );
	//printf("\n blocklevel:%d" , b);//error not accessible
	printf("\n Local m:%d" , lm);	
	
	}

