#include<stdio.h>
#include<ctype.h>
int main()
{
	float bp,da,hra,ca,gs,pf,it,td,np;
	char grade;
	printf("\nenter the basic pay = : " );
	scanf("%f" , &bp);
	fflush(stdin);// used for clearing stream (already defined in stdio.h) 
	printf("\nenter grade : ");
	scanf("%c" , &grade);
	fflush(stdin);
	
	if(toupper(grade)=='A')
	{
		da=(0.80*bp);
		hra=0.4*(bp+da);
		ca=5000;	
	}
	else
		if(toupper(grade)=='B')
		{
			da=(0.85*bp);
			hra=0.35*(bp+da);
			ca=4000;
		}
		else
			if(toupper(grade)=='C')
			{
				da=(0.90*bp);
				hra=0.3*(bp+da);
				ca=3000;
			}
			else
				if(toupper(grade)=='D')
				{
					da=(bp);
					hra=0.2*(bp+da);
					ca=1500;
				}
	
	gs=bp+da+hra+ca;
	if(gs>60000)
	  	it=(0.125*gs);  	
	else
		it=0;
	pf=(0.085*gs);
	td=it+pf;
	np=gs-td;
		
    printf("\ndearness allowance :%0.2f" , da);
	printf("\nhouse rent allowance :%0.2f " , hra);
	printf("\nconveyance allowance :%0.2f " , ca);
	printf("\ngross salary : %0.2f" , gs);
	printf("\nnet pay : %0.2f" , np);
	printf("\nincome tax deduction : %0.2f" , it);    
    printf("\nprovident fund deduction  : %0.2f" , pf);    
    printf("\ntotal deduction : %0.2f" , td);
    printf("\n Net Pay : %0.2f", np);
}

