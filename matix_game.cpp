#include<iostream>
using namespace std;
	char mat[3][3];
	char temp[3][3];
void check(int n,int m)
{
	for(int i=0;i<3;i++)
	{
		temp[n][i]='H';
	}
	for(int i=0;i<3;i++)
	{
		temp[i][n]='H';
	}
}

int main()
{
	int n,m;	


	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>mat[i][j];
			temp[i][j]='T';
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(mat[i][j]=='H')
			{
				check(i,j);
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<temp[i][j]<<" ";
	
		}
		cout<<"\n";
	}
}