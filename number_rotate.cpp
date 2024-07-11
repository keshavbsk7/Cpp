#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n=4;
	vector<int> a;
	for(int i=1;i<=n;i++)
	{
		a.push_back(i);
	}
	int t=0;
	int temp;
	while(t<n){
	temp=a[0];
	for(auto i:a)
	{
		cout<<i;
	}
	a.erase(a.begin());
	a.push_back(temp);
	cout<<"\n";
	t++;
}
}