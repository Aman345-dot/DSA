#include<iostream>
//#include<climits>
using namespace std;
int main(){
  int arr[2][3] = {1,2,3,4,5,6};
  int brr[2][3]= {7,8,9,10,2,3};
   int res[2][3];
   for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
        res[i][j] = arr[i][j] + brr[i][j];
        
    }
    

   }



//    for(int i=0; i<2; i++){
//     for(int j=0; j<3; j++){
//         cout<<res[i][j]<<" ";
//     }
//     cout<<endl;
//    }
}
