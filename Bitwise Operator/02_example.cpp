#include<iostream>
using namespace std;
int main(){
    int a , b = 1;
    a = 10;

    if(++a){    // In CPP IF condtion rule 0 = False , +ve number = True , -ve number = True. Everything is true one zero false.
        cout << b;

    }
    else{
        cout << ++b;
    }
}