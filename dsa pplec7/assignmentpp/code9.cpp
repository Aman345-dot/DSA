#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows:";
    cin>>n;
    int k=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<char(64+k);
        }
        cout<<endl;
    }
}