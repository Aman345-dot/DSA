#include<iostream>
using namespace std;
int swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
   
}

int main(){
    // pass by reference(using alias)
  int a,b;
  cin>>a>>b;
  swap(&a,&b);
  cout<<a<<" "<<b;





}