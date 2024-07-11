#include<iostream>
using namespace std;
int main()
{
	int a[]={1,1,1,3,4,6};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1]||a[i+1]-a[i]==1)
		{
			
			continue;
		}
		else
		{
			cout<<"missing num is "<<a[i]+1<<"\n";
			
			
		}
	}
	return 0;
}