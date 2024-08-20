#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
bool patterncheck(string s,string pattern)
{
	string words;
	vector<string> res;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
			res.push_back(words);
			words="";
		}
		else words+=s[i];
	}
	res.push_back(words);
	unordered_map<string,char>map;
	if(res.size()!=pattern.length()) return false;
	for(int i=0;i<pattern.length();i++)
	{
		if(map[res[i]]=='/0')
		{
			map[res[i]]=pattern[i];
			cout<<"hlo";
		}
		else{
			if(map[res[i]]!=pattern[i]) {
			cout<<"hi";
			return false;
		}
	}
	}
	return true;
		
}
int main()
{
	string s="dog cat cat dog";
	string pattern="abba";
	cout<<patterncheck(s,pattern);
}