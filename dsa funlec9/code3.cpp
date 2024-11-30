#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int r;
    cout<<"enter r:";
    cin>>r;
    int nfact = 1;
    for(int i=2; i<=n; i++){
        nfact*=i;
    }
     cout<<nfact;
}