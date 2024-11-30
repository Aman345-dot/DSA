#include<iostream>
using namespace std;

//5or3butnot 15
int main(){
    int n;
    cin>>n;
     if((n%3==0 || n%5==0) && (n%15!=0)){
        cout<<"divisible by 5 or 3 but not divisible by 15:";
     }
}