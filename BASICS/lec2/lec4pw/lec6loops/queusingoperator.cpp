#include<iostream>
using namespace std;
int main(){
    // wap to count digits of a given numbers
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//    int count=0;
//    while(n>0){
//     n/=10;
//     count++;
//    // cout<<count; ye to ek ek bar print hoga
//    }
//    cout<<count;


int n;
cout<<"enter the num:";
cin>>n;
int a =n;
int count=0;
  while(n>0){
    n/=10;
    count++;
  }
  if (n==0) cout<<1;
  else cout<<count;
    
   }


