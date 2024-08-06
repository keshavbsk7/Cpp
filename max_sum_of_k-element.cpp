#include<iostream>
using namespace std;
int main()
{
	int a[7]={-1,2,3,3,4,5,-1};
	int n=7;
	int k=4;
	int l=0,r=k-1;
	int maxsum=-1,sum=0;
	while(r<n-1)
	{
		sum=0;
		for(int i=l;i<=r;i++)
		{
			sum+=a[i];
		}
		l++;
		r++;
		if (sum>maxsum) maxsum=sum;
	}
	cout<<maxsum;
}