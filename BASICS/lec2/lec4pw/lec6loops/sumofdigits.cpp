#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the number:";
   cin>>n;
   int sum=0;
   int lastdigit=0;


   while(n>0){
       n%10;
       lastdigit= n%10;
       sum +=lastdigit;
       n/=10;
   }
   cout<<sum;
}