#include<iostream>
using namespace std;
int main(){
    // int x=5;
    // int *p = &x;
    // int y=5;
    // int* p2=&x;
    // cout<<*p + *p2;

    int x,y;
    int *p1=&x;
    int *p2=&y;
    cout<<"enter first number:";
    cin>>*p1;
    cout<<"enter second number:";
    cin>>*p2;
    cout<<*p1 + *p2;
}