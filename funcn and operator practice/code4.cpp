#include<iostream>
using namespace std;

int square(int n){
    return n*n;
}

int countnumberofdigits(int num){
    int ans=0;
    while(num>0){
     ans++;
     num /=10;
    }
   return ans;
    
}

int main(){
    int n;
    cout<<"enter the num:";
    cin>>n;
    int numofdigits = countnumberofdigits(n);
    cout<<square(numofdigits)<<endl;
    return 0;
}

