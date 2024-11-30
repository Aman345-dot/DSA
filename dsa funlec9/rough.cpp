#include<iostream>
using namespace std;
// pascal triangle

int fact(int x){
int f=1;
for(int i=2; i<=x; i++){
     f*=i;
}
return f;
}

int combination(int a,int b){
    int ncr=fact(a)/(fact(b)*fact(a-b));
    return ncr;
}

int main(){
    cout<<"enter row no:";
    int n;
    cin>>n;     
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<(combination(i,j))<<" ";


        }
        cout<<endl;
    }
    
}