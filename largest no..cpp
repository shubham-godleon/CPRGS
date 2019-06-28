#include<iostream>
using namespace std;
int main()
{
	int a[1000]= {0};
	int n;
	cout<< "how many no.s you wanna compare?"; 
	cin >> n;
	for(int i = 0 ; i<n ; i++)
	{
		cin>>a[i];
	}
	int max = 0 ;
    for( int i = 0 ; i< n ; i++)
    {
    	if(a[i] > max)
    	{
    		max = a[i];
		}
	}
	cout<<"the largest no. is "<<max;
}
