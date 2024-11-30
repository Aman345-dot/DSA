#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no:";
    cin>>n;
   
//    if(n%5==0 && n%3==0){
//     cout<<"divisible by 5 and 3:";
//    }
//  if(n%15==0){
//     cout<<"divisible by both 5 and 3:";
//  }
    // else{
    //     cout<<"not divisible:";
    // }

 if(n%5==0 || n%3==0){
    if(n%15!=0){
        cout<<" the number is divisible by 5 or  3 but not 15:";
    }
    else{
        cout<<"not matching condition:";

    }
 }
 else{
    cout<<"not matching condition:";
 }
    
   }