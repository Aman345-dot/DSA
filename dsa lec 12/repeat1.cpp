#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,1,7};
    for(int i=0; i<=4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int *ptr= arr;
    cout<<ptr<<endl;
    ptr[0]= 5;
    for(int i=0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }
}