#include<iostream>
using namespace std;
int main(){
    // pascal triangle optimised
    int n;
    cout<<"enter the row no:";
    cin>>n;
    for(int i=0; i<=n; i++){
        float curr=1;
        for(int j=0; j<=i; j++){
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
}