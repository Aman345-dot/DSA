#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the positive integer:";
    cin>>n;
//     if(n%5==0 && n%3==0){
//         cout<<"n is divisible by 5 and 3:";
//     }
//     else{
//         cout<<"not divisible by 5 and 3:";
//     }

  if(n%5==0 ){
     if(n%3==0){
        cout<<"divisible by both 5 and 3:";
     }
     else{
        cout<<"not matching condition:";
     }
    }
    else{
        cout<<"condition not satisfied:";
    }
}