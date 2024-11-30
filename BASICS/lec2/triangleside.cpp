#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter side a:";
    cin>>a;
    cout<<"enter side b:";
    cin>>b;
    cout<<"enter side c:";
    cin>>c;
    // sum of ant two sides>third side
    if(((a+b)>c) || ((b+c)>a) || ((c+a)>b) ){
        cout<<"triangle";
    }
    else{
        cout<<"not a triangle:";
    }
   

}