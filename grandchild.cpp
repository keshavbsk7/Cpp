#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	string str[4][2]={{"luke","shaw"},{"wayne","rooney"},{"rooney","ronaldo"},{"shaw","ronaldo"}};
	unordered_map<string,int>map;
	for(int i=0;i<4;i++)
	{
		
		
			map[str[i][1]]++;
	
	//	cout<<map[str[i][1]];
	}
	int grandchild=0;
	for(int i=0;i<4;i++)
	{
		if(str[i][1]=="ronaldo")
		{
			
			grandchild+=map[str[i][0]];
			
		}
	}
	cout<<grandchild;
	}