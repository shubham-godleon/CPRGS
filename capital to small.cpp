#include<stdio.h>
int main()
{
	char ch;
	printf("enter the alphabet : " , ch);
	scanf("%c" , &ch);
	if(int(ch)>=65 && int(ch)<=90)
		ch=ch+32;
	else
		if(int(ch)>=97 && int(ch)<=122)
    		ch=ch-32;
	printf("converted : %c" , char(ch));
}
