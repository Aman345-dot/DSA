#include<iostream>
using namespace std;
// week no question code 1
int main(){

//    int x;
//     cout<<"enter the number:";
//     cin>>x;
//     switch (x)
//     {
//     case 1:
//         cout<<"monday:";
//         break;

//      case 2:
//         cout<<"tuesday:";
//         break;

//      case 3:
//         cout<<"wednesday:";
//         break;

//      case 4:
//         cout<<"thuresday:";
//         break;

//      case 5:
//         cout<<"friday:";
//         break;

//      case 6:
//         cout<<"friday:";
//         break;

//      case 7:
//         cout<<"saturday:";
//         break;

       
//     default:
//     cout<<"invalid number:";
        

   //total no days in a month code 2

int x;
cout<<"enter month number:";
cin>>x;

   switch (x)
   {
   case 1 :
    cout<<"31"; // jan
    break;

    case 2 :
    cout<<"28 - 29"; // feb
    break;
    
     case 3 : // march
    cout<<"31";
    break;
    
     case 4 : // april
    cout<<"30";
    break;
    
 case 5 : // may
    cout<<"31";
    break;

 case 6 : // june
    cout<<"30";
    break;

 case 7 : // july
    cout<<"31";
    break;

 case 8 : // aug
    cout<<"31";
    break;

     case 9 : //sept
    cout<<"30";
    break;

     case 10 : // oct
    cout<<"31";
    break;

 case 11 : // nov
    cout<<"30";
    break;

 case 12 : //dec 
    cout<<"31";
    break;


   default:
    break;
   }
}

