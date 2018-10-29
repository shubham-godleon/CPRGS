#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter any alphabet: " , ch);
	scanf("%c" , &ch);
	if(	(toupper(ch)=='A')||
		(toupper(ch)=='E')||
		(toupper(ch)=='I')|| 
		(toupper(ch)=='O')|| 
		(toupper(ch)=='U'))
		
		printf("It is a vowel");
	else
		printf("It is a consonant.");
}
