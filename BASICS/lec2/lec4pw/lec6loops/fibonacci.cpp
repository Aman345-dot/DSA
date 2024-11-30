#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the number:";
   cin>>n;
   int a=1,b=1,sum=0;
   for(int i=1;i<=n;i++){
      sum=a+b;
      a=b;
      b=sum;
      cout<<sum<<" "<<endl;
   }
   cout<<sum;

   

}