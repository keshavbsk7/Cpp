#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>a={1, 2, 3, 4, 5, 6, 7};
	vector<int>b;

	while(a.empty()!=true)
	{
		auto max=max_element(a.begin(),a.end());
		
		
		b.push_back(*max);
		a.erase(max);
		 if (!a.empty())
        {
		auto min=min_element(a.begin(),a.end());
		
		b.push_back(*min);
		a.erase(min);
		
	}
	}
	cout<<"\n";
	for(auto i:b)
	{
		cout<<i<<" ";
	}
}