#include<iostream>
using namespace std;

string getStr(int n){
	string temp = "";
	while(n){
		temp += '0'+(n%10);
		n/=10;
	}
	string result = "";
	for(int i=temp.size()-1; i>=0; i--) result+=temp[i];
	return result;
}

int main(){
	cout<<"A"+getStr(183);
	
	char a='0'+1;
	cout<<a;	
	return 0;
}