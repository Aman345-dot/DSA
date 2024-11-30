#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num of rows:";
    cin>>n;
    int m;
    // cout<<"enter the num of column:";
    // cin>>m;
    // for(int i=1; i<=n; i++){
    //      for(int j=1; j<=m; j++){
    //         cout<<j;
    //      }
    //      cout<<endl;

    // }
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
        for(int j=1;j<=n; j++){
            cout<<j;
        }
        cout<<endl;

    }
}