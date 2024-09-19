#include<iostream>
using namespace std;
void print(int a[6][6],int m,int n)
{
	int left,top=0;
	int right=m-1;
	int bottom=n-1;
	while(left<=right&&top<=bottom)
	{
		for(int i=left;i<=right;i++)
		{
			cout<<a[top][i]<<" ";
		}
		top++;
		for(int i=top;i<=bottom;i++)
		{
			cout<<a[i][right]<<" ";
		}
		right--;
		if(top<=bottom)
		{
			for(int i=right;i>=left;i--)
			{
				cout<<a[bottom][i]<<" ";
			}
			bottom--;
		}
		if(left<=right)
		{
			for(int i=bottom;i>=top;i--)
			{
				cout<<a[i][left]<<" ";
			}
			left++;
		}
	}
}
int main()
{
	int a[6][6]={{1,2,3,4,5,6},{20,21,22,23,24,7},{19,32,33,34,25,8},{18,31,36,35,26,9},{17,30,29,28,27,10},{16,15,14,13,12,11}};
	print(a,6,6);
}