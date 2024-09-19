#include<iostream>
#include<vector>
using namespace std;
int maxi(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int maxProductSubarray(vector<int>arr)
{
	int pre=1;
	int suf=1;
	int	max=INT_MIN;
	for(int i=0;i<arr.size();i++)
	{
		if(pre==0) pre=1;
		if(suf==0)suf=1;
		pre=pre*arr[i];
		suf=suf*arr[i];
		max=maxi(max,maxi(pre,suf));
	}
	return max;
}

int main()
{
	vector<int>arr={3,2,-1,4,-6,3,-2,6};
	cout<<maxProductSubarray(arr);
}