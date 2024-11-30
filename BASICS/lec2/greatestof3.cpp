#include<iostream>
using namespace std;
int main(){
    int x,y,z;
   cout<<"enter no x:";
   cin>>x;
   cout<<"enter no y:";
   cin>>y;
   cout<<"enter no z:";
   cin>>z;

   if(x>y){
         if(x>z){
            cout<<x<<" "<<" is greatest:";
         }
         else{
            cout<<z<<" is greatest:";
         }
   }
   else{
    if(y>z){
        cout<<y<<" "<<" is greatest:";
    }
    else{
        cout<<z<<" "<<"is greatest:";
    }
   }

}