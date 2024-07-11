//pattern
//*
//* *
//* * *
//* * * *
//* * * * *
//* * * *
//* * *
//* *
//*
	
#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int row=1 ;row<2*n;row++)
	{
		int c=row>n? 2*n-row:row;
		int space= n-c;
		for(int i=0;i<space;i++)
		{
			cout<<" ";
		}
		for(int col=0;col<c;col++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	
}

