#include<iostream>
using namespace std;

int square(int y){
    return y*y;
}

 int firstsquare(int x){
     for(int i=1; i<=x; ++i){
         cout<<i<<" "<<square(i)<<endl;
     }
    
}
int main(){
    int n;
    cout<<"enter the num n:";
    cin>>n;
  //  square(n);
   cout<< firstsquare(n);
}

   