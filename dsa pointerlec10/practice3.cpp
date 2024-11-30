#include<iostream>
using namespace std;
void find(int n,int *ptr1,int *ptr2){
   *ptr2=n%10;
   while(n>10){
    n/=10;
   }
   *ptr1=n;
   return;
}
int main(){
    int n;
    cin>>n;
    int lastdigit , firstdigit;
    int *ptr1=&lastdigit;
    int *ptr2=&firstdigit;
    find(n,ptr1,ptr2);
    cout<<lastdigit<<" "<<firstdigit;
}