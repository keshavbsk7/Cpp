#include<iostream>
using namespace std;
int main()
{
	int rat=100;
	int units=2;
	int n=8;
	int arr[n]={2,8,3,5,7,4,1,2};
	int tot=rat*units;
	
	for(int i=0;i<n;i++)
	{
		tot-=arr[i];
		cout<<i+1;
		if(tot<0)
		{
			cout<<i+1;
			break;    
		}
		if(i+1>n)
		{
			cout<<"0";
			break;
		}
		
	}
}