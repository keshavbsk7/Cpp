#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int col=1;
	int cc,temp,space=n-1;
	for(int i=0;i<space+2;i++)
	{
		cout<<"  ";
	}
	cout<<""<<col<<"\n";
	int c=0;
	for(int i=0;i<n-1;i++)
	{
		space=space-1;
		for(int j=0;j<space;j++)
		{	
				cout<<"   ";
		}
		col=col+n-i;
		temp=col;
		cc=n-i;
		cout<<temp<<" ";
		while(c<=i)
		{
			cout<<temp-(cc-1)<<" ";
			
			temp=temp-(cc-1);
			cc++;
			c++;
		}
		c=0;
		cout<<"\n";
//		space=space-1;
		
		
	}
}