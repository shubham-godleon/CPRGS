#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
void swapper(int x,int y)
{
    int i;
 	i=x;
	x=y;
	y=i; 
	cout<<"a is now :"<<" "<<x<<endl;  //pass by value here used for the function if pass by reference was used we would not have used cout in the function declaration itself.
 	cout<<"b is now :"<<" "<<y<<endl;
}
 
 int main()
 {
 	int a,b;
 	cout<<"enter the first no. a:"<<endl;
 	cin>>a;
 	cout<<"enter the first no. b:"<<endl;
 	cin>>b;
 	swapper(a,b);
 	
 }
