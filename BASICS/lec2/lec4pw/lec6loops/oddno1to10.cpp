#include<iostream>
using namespace std;
int main(){
    // continue
    int n;
    cout<<"enter th num:";
    cin>>n;
    bool flag = true;

    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            flag = false;
            cout<<"num is not prime";
            break;
        }
        else cout<<false<<"num is prime:";
    }
}