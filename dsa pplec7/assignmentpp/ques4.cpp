#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows:";
    cin>>n;
    for(int i=1; i<=n; i++ ){
        for(int j=1; j<=n+1; j++){
            if(i%2!=0)   cout<<char(64+j)<<" ";
            if(i%2==0) cout<<j;
        }
        cout<<endl;
    }
    }