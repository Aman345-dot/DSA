#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
     for(int i=0; i<=a.size();i++){
        cout<<a[i]<<" ";
     }
     cout<<endl;
}
int main(){
    vector<int>v1;
     v1.push_back(1);
   v1.push_back(6);
   v1.push_back(2);
   v1.push_back(3);
   v1.push_back(7);
   v1.push_back(4);
   display(v1);


   for(int i=0,j=v.size()-1;i<=j;i++,j--)
   display(v1);
}
