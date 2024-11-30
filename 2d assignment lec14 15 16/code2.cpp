#include<iostream>
//#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows:";
    cin>>m;

    int n;
    cout<<"enter no of column:";
    cin>>n;
    int arr[m][n];

    for(int i=0; i<=m-1; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];

        }
        
    }

   int add =0;
   for(int i=0; i<=m-1; i++){
        for(int j=0; j<n; j++){
            add = add + arr[i][j];

        }
       // cout<<add;
}
cout<<add;

}