#include<iostream>
#include<vector>
using namespace std;
//last occurance
// method1 from 1st
// int main(){
//        vector<int>v;
//       v.push_back(6);
//       v.push_back(9);
//       v.push_back(10);
//       v.push_back(6);
//       v.push_back(5);
//       v.push_back(7);
//       v.push_back(9);
//       v.push_back(0);
//       int x=6;
//       int idx = -1;
//       for(int i=0; i<=v.size(); i++){
//        if(v[i]==6) idx=i;  
//       }
//       cout<<idx;

// }

// method 2nd from last
int main(){
       vector<int>v;
        v.push_back(6);
     v.push_back(9);
      v.push_back(10);
      v.push_back(6);
     v.push_back(5);
       v.push_back(7);
      v.push_back(9);  
  v.push_back(0);
  int idx=0;
  int x=6;
  for(int i=v.size()-1;i>=0; i--){
       if(v[i]==x){
              idx=i;
              break;
       }
  }
  cout<<idx;
 }