#include<iostream>
using namespace std;
// int main(){
//     int x=4;
//     int * ptr=&x;
//     cout<<&x<<endl<<ptr<<endl<<*ptr;

// }
// void swap(int*x,int*y){
//    int temp=*x;
//    *x=*y;
//    *y= temp;
   
   
//    return;
// }
// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//    int *x=&a;
//    int *y=&b;
//    swap(&a,&b);
//    cout<<a<<" "<<b;
// }


void swap(int x,int y){
   int temp=x;
   x=y;
   y= temp;
   return;
   }
int main(){
    int a,b;
    cin>>a;
    cin>>b;
   
   swap(a,b);
   cout<<a<<" "<<b;
}