#include<iostream>
#include <cstdlib>
using namespace std;
int check(int a[],int n)
{
	int dif_sum=0;
	for(int i=0;i<n-1;i++)
	{
		dif_sum+=abs(a[i+1]-a[i]);
	}
	return dif_sum;
}
int main()
{
	int mat[4][4]={{1,2,3,4},{4,1,2,3},{3,1,4,2},{2,3,4,1}};
	
	if(check(mat[0],4)!=4-1)
	{
		cout<<"false";
		exit(0);
	}
	int flag=check(mat[1],4);
	for(int i=2;i<4;i++)
	{
		if(check(mat[i],4)!=flag)
		{
			
			cout<<"false";
			exit(0);
		}
//		cout<<check(mat[i],4)<<" \n";	

	}
	cout<<"true";
//	cout<<check(mat[1],4);
	
}