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
    
}