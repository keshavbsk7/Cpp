#include<iostream>
using namespace std;
int main()
{
	string s[10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
	int n;
	cin>>n;
	string ans[3];
	int i=0;
	int rem;
	while(n>0)
	{
		rem=n%10;

		ans[i]=s[rem];
		n=n/10;
		i++;
	}
		for(int j=i-1;j>=0;j--){
		cout<<ans[j]<<" ";
	}
}
