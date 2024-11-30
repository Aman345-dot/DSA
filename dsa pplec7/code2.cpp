#include<iostream>
using namespace std;
int main(){
// triangular 
int n;
cout<<"enter the num of rows:";
cin>>n;
// int m;
// cout<<"enter the num of column:";
// cin>>m;
// for(int i=1; i<=n; i++)
// {
// for(int j=1; j<=i; j++){
//      cout<<"*";
// }
// cout<<endl;
// }


// reverse triangle
for(int i=1; i<=n; i++){
    for(int j=1; j<=n+1-i; j++ ){
        cout<<"*";
    }
    cout<<endl;
}
}