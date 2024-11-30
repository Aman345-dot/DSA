#include<iostream>
using namespace std;
int main(){
    // prime or not
    // int n;
    // cout<<"Enter the num:";
    // cin>>n;
    // for(int i=2; i<=n-1; i++){
    //     if(n%i==0){
    //         cout<<n<<" "<<"is composite:";
    //         break;
    //     }
    //     else cout<<n<<" "<<"is prime";
    //     break;
    // }

    int n;
    cout<<"Enter the num:";
    cin>>n;
    bool flag = true;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            flag = false;
            
        }
    }
    if(flag==true) cout<<n<<" "<<"is prime";
    else cout<<"composite:";
}