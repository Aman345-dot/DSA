#include<iostream>
using namespace std;
// binary triangle
// Method 1 using extra variable
int main(){    
   int n;
   cout<<"No of rows:";
   cin>>n;
   int a=1;
   // for(int i=1; i<=n; i++){
   //    if (a%2==0)  a=0;
   //    else a=1;
   //    for(int j=1; j<=i; j++){
   //       cout<<a;
   //       if(a==1) a=0;
   //       else a=1;
   //    }
   //    cout<<endl;
   // }



   // METHOD NO --- 2
for(int i=1; i<=n; i++){
   for(int j=1; j<=i; j++){
      if((i+j)%2==0) cout<<1;
      else cout<<0;
   }
   cout<<endl;

}

}