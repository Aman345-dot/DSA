#include<iostream>
using namespace std;
int main(){
    // 1-2+3-4+5-6...n
int n;
cout<<"enter the series num:";
cin>>n;
int sum=0;
 if(n%2==0) sum=-n/2;
 else sum= -n/2 + n;
 cout<<sum;
}