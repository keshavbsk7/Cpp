#include<iostream>
using namespace std;
int output1;
string output3="";
int unique_elements=0;
int power(int a,int b)
{
	int sum=1;
	for(int i=0;i<b;i++)
	{
		sum*=a;
	}
	return sum;
}
int count(char a,string s)
{
	int c=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==a)
		{
			c++;
		}
	}
	output1+=c*power(10,unique_elements-1);
	unique_elements--;
	return c;
}

string output2(string s)
{
	string num[12]={"1","2","3","4","5","6","7","8","9","10","11","12"};
	int vis[26]={0};
	string temp="";
	for(int i=0;i<s.size();i++)
	{
		if(vis[s[i]-'A']==0)
		{
			int c=count(s[i],s);
			output3+=num[c-1];
			temp+=num[c-1];
			temp+=s[i];
			vis[s[i]-'A']=1;
			
		}
	}
	return temp;
}
void unique(string s)
{
	int vis[26]={0};
	for(int i=0;i<s.size();i++)
	{
		if(vis[s[i]-'A']==0)
		{
			unique_elements++;
			vis[s[i]-'A']=1;
			
		}
	}
}
bool check(char a,char* vis)
{
	for(int i=0;i<10;i++)
	{
		if(vis[i]==a)
		{
			return false;
		}
	}
	return true;
}
// removeduplicate(int num)
//{
//	int num[10]={0};
//	
//}

int remove(int n){
	bool digits[10];
	for(int i=0;i<10;i++) digits[i] = false;
	int temp = 0;
	while(n){
		int rem = n%10;
		if(!digits[rem]){
			temp = (temp*10)+rem;
			digits[rem] = true;
		}
		n/=10;
	}
	return temp;
}

int main()
{
	int s;
	cin>>s;
	cout<<remove(s);
//	unique(s);
//	string ans2=output2(s);
//	output3=removeduplicate(output3);
//	//output3+=ans2;
//	cout<<output1<<","<<ans2<<","<<output3;
	return 0;
}