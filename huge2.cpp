#include<iostream>
using namespace std;
long long atoi(int arr[],int size){
	long long num=0;
	for(int i=0;i<size;i++){
		 num=num*10+arr[i];
		 
	}
	return num;
}
int main(){
	int arr1[12]={9,2,8,1,3,5,6,7,3,1,1,6};
	int arr2[9]={7,8,4,6,2,1,9,9,7};
	cout<<atoi(arr1,12)+atoi(arr2,9);
	return 0;
}