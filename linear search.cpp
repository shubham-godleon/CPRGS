#include<iostream>
using namespace std;
int main(){
	
	int arr[5]={5,4,1,2,3};
	int a,k;
	cout<< "enter the no. to be searched ?"<< endl;
	cin >> a;
	
	for(int i= 0 ; i<5 ; i++)
	{
		if(arr[i]==a)
		{
			cout<<" the no. is present in the array."<<endl;
			break;
		}
	}
	cout<<"the no. is not present"<<endl;
}
