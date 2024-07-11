#include<iostream>
#include<string>
#include<vector>
using namespace std;

void reverse(vector<string> &ss,int n)
{
	cout<<ss[n];
	if(n==0)
	{
		return;
	}
	cout<<" ";
	reverse(ss,n-1);
}
int main()
{
	string s="one two three";
	string ans="";
	vector<string>ss;

	for(int i=0;i<s.length();i++)
	{
		
		if(s[i]==' ')
		{
			if(!ans.empty())
			{
			
			ss.push_back(ans);
			ans="";
			
			}
		}
		else{
			ans+=s[i];
		}
		
	}
	ss.push_back(ans);
	reverse(ss,ss.size()-1);
}