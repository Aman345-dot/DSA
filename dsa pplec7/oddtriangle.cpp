#include<iostream>
using namespace std;
int main(){
    // odd num triangle
    int n;
    cout<<"Enter the num of row:";
    cin>>n;
    for(int i=1; i<=n; i++){
        // for(int j=1; j<=2*i-1; j+=2){
        //  cout<<j<<" ";
        // }
        int a = 1;
        for(int j=1; j<=i; j++){
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;
        

    }
}