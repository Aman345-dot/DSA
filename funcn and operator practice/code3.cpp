#include<iostream>
using namespace std;

int odd(int a,int b){
    for(int i=a; i<=b; i++){
        if (i%2!=0) cout<<i<<endl;
    }
}

int main(){
    int a,b;
    cout<<"enter the num a:";
    cin>>a;
    cout<<"enter the num b:";
    cin>>b;
    int c=min(a,b);
    int d= max(a,b);
    odd(c,d);
}