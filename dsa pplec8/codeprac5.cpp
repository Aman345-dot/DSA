#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows:";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        cout<<"*";

    }
    cout<<endl;
    int m=n-1;
    int nsp=1;
    for(int k=1; k<=m; k++){    
for(int j=1; j<=m+1-k; j++){
        cout<<"*";
    }    
    for(int l=1; l<=nsp; l++){
        cout<<" ";
    }
    nsp+=2;
   for(int j=1; j<=m+1-k; j++){
        cout<<"*";
    }    
    cout<<endl;
    }

}