#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the marks:";
    cin>>m;
    
    if(m>=91){
        cout<<"excellent:";

    }

    else if(m>=81){
        cout<<"very good:";
    }

    else if(m>=71){
        cout<<"good:";
    }

    else if(m>=61){
        cout<<"can do better:";
    }

    else if(m>=51){
        cout<<"avarage :";
    }

    else if(m>=40){
        cout<<"below average:";
    }

    else {        cout<<"fail:";
    }
}