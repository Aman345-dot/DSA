#include<iostream>
using namespace std;
int main(){
    // cross star problem
    int n;
    cout<<"No of rows:";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(((i+j)==6) || (i==j))  cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}

