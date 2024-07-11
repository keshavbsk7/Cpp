#include<iostream>
//#include<set>
#include<algorithm>
using namespace std;
int main(){
//      set<int> num;
        int n=3;
        int notes[n]={10,2,1};
        int count[n]={0};
        int target=15;
        int sum=0;
        for(int i=0;i<n;i++){
                if(target>=notes[i]){
                        count[i]=target/notes[i];
                        cout<<notes[i]<<"--->"<<count[i]<<"\n";
                        target=target%notes[i];
//                      num.insert(notes[i]);

                }
        }
//      for(int i=0;i<10;i++){
//              if(count!=0){
//                      cout<<notes[i]<<"--->"<<count[i]<<endl;
//              }
//      }
        for(int i=0;i<n;i++){
                sum=sum+count[i];
        }
        cout<<sum;
//      cout<<num.size();
//      return 0;
}