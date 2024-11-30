#include<iostream>
#include<vector>
using namespace std;
// 2 sum
int main(){
    vector<int>v;
    int x;
    cout<<"enter the target:";
    cin>>x;
    
    int n;
    cout<<"enter size of array:";
    cin>>n;

    cout<<"enter array elements:";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);

    }
  
  for(int i=0; i<=v.size()-2;i++){
    for(int j=i+1;j<=v.size()-1;j++){
        if(v[i]+v[j]==x){
            cout<<"( "<<i<<" ,"<<j<<")"<<endl;
        }
    }
  }


}