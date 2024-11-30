#include<iostream>
#include<vector>
using namespace std;
int main(){
    // last occurance
    vector<int>v;
     v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
     v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(6);

    int x= 6;
    int idx=-1;
    for(int i=0;i<=v.size();i++){
        if(v[i]==x)   idx=i;
    }
    cout<<idx;

    

}
        







