#include<iostream>
using namespace std;
int main()
 {
 	int arr[4]; 
 	cout<< " enter the no.s : ";
 	for(int i = 0 ; i < 4 ; i++){
	 cin>>arr[i]; 
 }
   cout<< " the subarrays are  : "<<endl;
   for(int i = 0 ; i<4 ; i++)
   {
   	for(int j = i ; j<4 ; j++)
   	{
   		for(int k = i ; k<=j ; k++)
   		{
   			cout<<arr[k]<<" ";
		   }
	   }
   }
   
 }
