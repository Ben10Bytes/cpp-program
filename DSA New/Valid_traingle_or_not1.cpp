#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    
    cout <<"Enter first side: ";
    cin >> a;

    cout <<"Enter second side: ";
    cin >> b;

    cout <<"Enter third side: ";
    cin >> c;

    if((a + b > c) && (b + c > a) && (a + c > b)){
        cout <<"Valid traingle";
    } else{
        cout <<"Invalid";
    }
    return 0;
}