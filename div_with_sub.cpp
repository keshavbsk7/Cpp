#include<iostream>
using namespace std;
int main()
{
	int n=15;
	int temp,div;
	int d=0;
	if(n<0)
	{
		temp=n*(-1);
	}
	if(d<0)
	{
		div=d*(-1);
	}
	
	int c=0;
	while(temp>=div)
	{
		temp=temp-div;
		c++;
	}
	if(n<0||d<0)
	{
		cout<<c*(-1);
	}
	else
	cout<<c;
}