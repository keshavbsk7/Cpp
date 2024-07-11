#include<iostream>
#include<set>
using namespace std;
int main()
{
	int a[]={2,4,5,6,7,9,10,13};
	int b[]={2,3,4,5,6,7,8,9,11,15};
	set<int>arr;
	int size_a=sizeof(a)/sizeof(a[0]);
	int size_b=sizeof(b)/sizeof(b[0]);
	for(int i=0;i<size_a;i++)
	{
		arr.insert(a[i]);
	}
	for(int i=0;i<size_b;i++)
	{
		arr.insert(b[i]);
	}
	for(auto j:arr){
		cout<<j<<" ";
	}
}