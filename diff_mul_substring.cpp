#include<iostream>
using namespace std;
void diff(string a,string b)
{
	string temp="";
	for(int i=0;i<a.length();i++)
	{
		if(a[i]!=b[i])
		{
//			cout<<a[i]<<" ";
			temp+=a[i];
		}
		else if(!temp.empty())
		{
			cout<<temp<<" ";
			temp="";
		}
	}
}
int main()
{
	string s1="abcddefghom";
	string s2="abefuefjkom";
	diff(s1,s2);
	cout<<"\n";
	diff(s2,s1);

}