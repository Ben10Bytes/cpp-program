// This file is part of a C++ program that converts Fahrenheit to Celsius
// using a while loop.

#include<iostream>
using namespace std;
int main(){
    float f;
    cin>>f;
    float c = (f - 32) * 5/9;
    cout << f << " °F is : "<< c << " °C" << endl; // This line not finished for the degree symbol
    return 0;

}