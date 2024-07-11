#include<iostream>

using namespace std;
int count(string s,int start,int len,char val)
{
	int count=0;
	for(int i=start;i<=len;i++)
	{
		if(s[i]==val)
		{
			count++;
		}
		else
		{
			return count;
		}
	}
}
int main()
{
	string s="aabccda";
	int time;
	for(int i=0;i<s.length();i++)
	{
		time=count(s,i,s.length(),s[i]);
		cout<<s[i]<<time;
		i+=time-1;
	}
}