#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
	int a[100]={6, 2, 8, 4, 9, 4, 3, 11, 6, 4, 2, 3, 9, 1, 1, 5, 10, 10, 2, 11, 4, 4, 13, 5, 3, 12, 5, 12, 5, 8, 5, 5, 6, 6, 1, 11, 12, 10, 5, 1, 10, 4, 8, 11, 10, 7, 8, 4, 0, 0, 9, 4, 6, 1, 4, 5, 2, 6, 10, 3, 4, 6, 2, 3, 1, 4, 10, 6, 5, 5, 2, 7, 3, 11, 1, 1, 6, 4, 12, 10, 5, 6, 1, 2, 8, 5, 10, 6, 3, 8, 7, 1, 12, 6, 11, 2, 10, 9, 0, 2};

	int ans,s;
	int target=14;
    // Create an unordered_map of string to int
    unordered_map<int, int> hashTable;
	for(int i=0;i<100;i++)
	{
		ans=target-a[i];
		if(hashTable.find(ans)!=hashTable.end()){
			s=hashTable[ans];
			cout<<hashTable[ans]<<" "<<i<<"=="<<a[s]+a[i]<<"\n";
		}
		hashTable[a[i]]=i;
	}
    

    return 0;
}
