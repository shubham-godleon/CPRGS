#include <stdio.h>
#include <stdlib.h>
#include <cstring>// cstring contains the definition of strcpy function used below.
int main()

{
	
	char name[14] = "Shubham Kumar";
	printf("My name is %s. \n" , name);
	
	name [2] = 'i';
	printf("My name is %s. \n" , name);
	
	char food[] = "pizza";
	printf("My favourite food is %s.\n" , food);
	
    strcpy(food, "burger"); /*to change the string in the array*/
    printf("My favourite food is %s.\n" , food);
    
	return 0;
}
