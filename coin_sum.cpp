#include<iostream>
using namespace std;
int factor(int a[],int t)
{
	int count=0;
	for(int i=0;i<3;i++)
	{
		if(t%a[i]==0)
		{
			while(t>0)
			{
				t=t-a[i];
				count++;
			}
			break;
		}
	}
//	cout<<count;
	return count;
}
int high(int a[],int t)
{
	int count=0;
	for(int i=0;i<3;i++)
	{
		if(t-a[i]>=0)
		{
			while(t-a[i]>=0)
			{
				t=t-a[i];
//				cout<<t<<" ";
				count++;
			}
		}
	}
	return count;
}

int main()
{
	int a[3]={5,3,1};
	int target=15;
	if(factor(a,target)>high(a,target))
	{
		cout<<high(a,target);
	}
	else{
		cout<<factor(a,target);
	}
	
	
	
}