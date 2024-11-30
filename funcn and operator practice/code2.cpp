#include<iostream>
using namespace std;

int Area(int x){
    return  3.14*x*x;
     
}

int main(){
    int r;
    cout<<"enter the radius of circle r:";
    cin>>r;
   cout<<"Area of circle is:"<<Area(r)<<"unit square";

  
}