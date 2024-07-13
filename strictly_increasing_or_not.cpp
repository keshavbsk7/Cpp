#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>a={0,2,3,5,4,1};
	
	int flag;
	char sign='p';
	for(int i=0;i<a.size();i++)
	{
		if(sign=='p')
		{	
//			cout<<a[i];
			if(a[i]<a[i+1])
			{
				flag=0;
			}
			else
			{
				sign='n';
			
			}
		}
		else
		{
//			cout<<a[i];
			if(a[i-1]>a[i])
			{
				flag=0;
			}
			else{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		cout<<"yes";
	}
	else cout<<"no";
}