#include<iostream>
#include<vector>
using namespace std;
int MaxSubarraySum(vector<int>arr,int &ansstart,int &ansend)
{
	int sum=0;
	int max=INT_MIN;
	int start;
	for(int i=0;i<arr.size();i++)
	{
		if(sum==0) start=i;
		sum+=arr[i];
		
		if(sum>max) {		
		max=sum;
		ansstart=start;
		ansend=i;
		
		}
		if(sum<0)
		{
			sum=0;
		}
	}
	if(max<0) max=0;
	return max;
}
int main()
{
	vector<int>arr={-2,-3,4,-1,-2,1,5,-3};
	int ansstart,ansend;
	cout<<MaxSubarraySum(arr,ansstart,ansend);
	cout<<"\n";
	for(int i=ansstart;i<=ansend;i++)
	{
		cout<<arr[i]<<" ";
	}
}