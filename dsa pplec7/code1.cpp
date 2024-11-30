#include<iostream>
using namespace std;
int main(){
    // user input side of square
    int n;
    cout<<"num of square:";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; i++){
            cout<<j;
        }
        cout<<endl;

    }

}