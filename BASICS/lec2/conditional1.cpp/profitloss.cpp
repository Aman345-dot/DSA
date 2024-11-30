#include<iostream>
using namespace std;
int main(){
    cout<<"enter cp of the item:";
    int cp;
    cin>>cp;
    cout<<"enter sp of the item:";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"profit :";
        cout<<sp-cp;
        
    }
    if(cp>sp){
   cout<<"loss :";
   cout<<cp-sp;
    }

    if(sp==cp){
        cout<<"no profit no loss:";
    }

}