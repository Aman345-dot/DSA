#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the number:";
   cin>>n;

   bool flag = true;
   for(int i=2; i<=n-1; i++){
    if(n%i==0){
        flag = false; cout<<"n is composite:";
        break;
    }
    else cout<<"n is prime:";
    break;
    
   }
  
}