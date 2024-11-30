#include<iostream>
using namespace std;
int gcd(int x, int y){
    int hcf = 1;
    // for(int i=1; i<=min(x,y); i++){
        for(int i=min(x,y); i>=1; i--){   
        if(x%i==0 && y%i==0){
            hcf=i;
    break;
        }
    }
    return hcf;
}
int main(){
    int a;
    cout<<"enter the value of a:";
    cin>>a;
    int b;
    cout<<"enter the value of b:";
    cin>>b;
    cout<<gcd(a,b);
}