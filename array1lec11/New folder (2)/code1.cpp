#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num of students:";
    cin>>n;

    int marks[n];
    cout<<"enter marks of students:";
    for(int i=0; i<=n-1; i++){
        cin>>marks[i];
    }

    for(int i=0; i<=n-1; i++){
        if(marks[i]<35) cout<<i<<" ";
    }

    

}