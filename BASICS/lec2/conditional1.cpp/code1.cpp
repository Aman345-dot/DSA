#include<iostream>
using namespace std;
int main(){
   cout<<"Enter a positive integer:";
   int n;
   cin>>n;
   if(n%5==0){
    cout<<"divisible by 5";
   }

   else{
    cout<<"not divisible by 5";
   }
}