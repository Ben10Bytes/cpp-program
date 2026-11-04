#include<iostream>
using namespace std;
int main(){
    
    int a = 4;
    int b = 6;


    // & = AND OPERATOR
    // | = OR operator
    // ~ = NOT OPERATOR  
    // ^ = XOR OPERATOR 

    cout<<" a & b : " << (a & b) << endl;
    cout<<" a | b : " << (a | b) << endl;
    cout<<" ~b : " << ( ~b ) << endl;
    cout<<" a ^ b : " << (a ^ b) << endl;

    // Left and Right Shift 

    cout << (5 << 1) << endl;  // 5 = 000....0101 so left sift 1 bit then bits will be 000 ....1010  ( add one zero into the right side)
    cout << (5 << 2) << endl;
    cout << (20 >> 2) << endl;
    cout << (20 >> 3) << endl;


    // Post- increment , Pre - increment , Post- decrement and Pre - decrement ;

    int i = 7;

    cout << (i++) << endl; 
    // 7 , i = 8;

    cout << (++i) << endl;
    // i = 9;

    cout << (i--) << endl;
    // 9 , i = 8;

    cout << (--i) << endl;
    // 7 


    
}