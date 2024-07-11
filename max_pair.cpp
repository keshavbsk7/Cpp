#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int a[6]={1,4,2,5,7};
	vector<int> b;
	int max=0;
	for(int i=0;i<6;i++)
	{
		for(int j=i+1;j<6;j++)
		{
			if(a[i]+a[j]>max)
			{
				max=a[i]+a[j];
			}
		}
		b.push_back(max);
	}
	cout<<*max_element(b.begin(),b.end());
}