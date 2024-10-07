#include<iostream>
using namespace std;
int main()
{
	int a[7]={3,2,7,5,9,6,2};
	int k=3;
	int window_sum=0;
	for(int i=0;i<k;i++)
	{
		window_sum+=a[i];
	}
	int max_sum=window_sum;
	for(int i=1;i<=7-k;i++)
	{
		window_sum=window_sum-a[i-1]+a[i+(k-1)];
		if(window_sum>max_sum)
		{
			max_sum=window_sum;
		}
	}
	cout<<max_sum;
}