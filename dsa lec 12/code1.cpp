#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0; i<=4; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;

}
void change(int b[]){
    b[0] = 100;
  for(int i=0; i<=4; i++){
    cout<<b[i]<<" ";
  }
  cout<<endl;
  
}

int main(){
    // passing array to function
    int arr[5] = {1,4,2,7,46};
    display(arr);
    change(arr);
    display(arr);
}
