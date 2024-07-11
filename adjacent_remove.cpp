#include<iostream>
#include<stack>
using namespace std;
int add(char c,int start,string s,stack<char>& a)
{
	int count=0;
	for(int i=start;i<=s.length();i++)
	{
		if(s[i]==c){
			a.push(s[i]);
//			cout<<a.top();
			count++;
		}
		else{
			return count;
		}
	}
}
void remove(char c,stack<char>& a)
{
	while( a.empty()||a.top()==c )
	{
	//	cout<<a.top();
		a.pop();
	}
}
int main()
{
	string s="abbbacad";
	stack<char>a;
	a.push(s[0]);
	int k=0;
	for(int i=1;i<s.length();i++){
	
		k=add(s[i],i,s,a);
		if(k>1)
		{
			remove(s[i],a);
		}
		i+=k;
	}
	while(!a.empty()){
		cout<<a.top();
		a.pop();
	}

}