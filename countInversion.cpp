#include<iostream>
#include<vector>  
using namespace std;
int merge(vector<int> &arr,int low,int mid,int high)
{
	vector<int>temp;
	int cnt=0;
	int left=low;
	int right=mid+1;
	while(left<=mid&&right<=high)
	{
		if(arr[left]<=arr[right])
		{
			temp.push_back(arr[left]);
			left++;
		}
		else
		{
			temp.push_back(arr[right]);
			cnt+=(mid-left+1);
			right++;
		}
	}
	while(left<=mid)
	{
		temp.push_back(arr[left]);
		left++;
	}
	while(right<=high)
	{
		temp.push_back(arr[right]);
		right++;
	}
	for(int i=low;i<=high;i++)
	{
		arr[i]=temp[i-low];
	}
	return cnt;
}
int  mergesort(int low,int high,vector<int> &arr)
{
	int cnt=0;
	if(low==high) return cnt;
	int mid=(low+high)/2;

	cnt+=mergesort(low,mid,arr);
	cnt+=mergesort(mid+1,high,arr);
	cnt+=merge(arr,low,mid,high);
	return cnt;
}
int main()
{
	vector<int> arr={5,3,2,1,4};
	cout<<mergesort(0,arr.size()-1,arr);
	return 0;
	
}