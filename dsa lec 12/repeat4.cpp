#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   vector<int>v;
   //2sum
   int x;
   cout<<"enter the target";
   cin>>x;
    int n;
    cout<<"enter array size:";
    cin>>n;

    cout<<"enter the array element:";
    for(int i=0; i<=n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            // try this using j=0
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

    
}