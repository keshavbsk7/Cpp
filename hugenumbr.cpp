#include<iostream>


#include<string>
using namespace std;
int main()
{
	int num1[12]={9,2,8,1,3,5,6,7,3,1,1,6};
	int num2[9]={7,8,4,6,2,1,9,9,7};
	string n1="";
	string n2="";
	for(int i=0;i<12;i++)
	{
		n1+=to_string(num1[i]);
	}
	for(int i=0;i<9;i++)
	{
		n2+=to_string(num2[i]);
	}
	cout<<n1<<"\n"<<n2;
	cout<<"\n------------\n";
	cout<<stoll(n1)+stoll(n2)<<"\n";
}