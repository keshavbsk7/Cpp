#include<iostream>

using namespace std;
int max(int a,int b)
{
	if(a>b)return a;
	else return b;
}
int main()
{
	int a[5]={2,5,1,7,10};
	int r=0,l=0,sum=0;
	int maxlen=0;
	int target=15;

	int n=5;//size of the array
	while(r<n)
	{
		sum+=a[r];
		while(sum>target)
		{
			sum-=a[l];
			l++;
		}
		
		if(sum<=target)
		{
			maxlen=max(maxlen,r-l+1);
		}
		r++;
	}
	cout<<maxlen;
	
}
