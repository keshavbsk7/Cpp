#include<iostream>
#include<cmath>
#include<map>
using namespace std;
bool perfectsquare(int n)
{
	int s=sqrt(n);
	if(s*s==n)
		return true;
	else
		return false;
}
bool multiple(int n)
{
	if(n%4==0)
	{
		if(n%6==0)
		{
			return true;
		}
	}
	else
		return false;
}
bool even(int n)
{
	if(n%2==0)
	{
		return true;
	}
	else
	return false;
}
int main()
{
	map<int,int>ans;
	int a[5]={10, 36, 54,89,12};
	int weight;
	for(int i=0;i<5;i++)
	{
		weight=0;
		if(perfectsquare(a[i]))
			weight+=5;
		if(multiple(a[i]))
			weight+=4;
		if(even(a[i])){
		 weight+=3; 			
		}
		ans.insert(pair<int,int>(a[i],weight));
	}
	for(auto &i:ans)		
	{
		cout<<i.first<<"=>"<<i.second<<"\n";
	}
	
} 
                  