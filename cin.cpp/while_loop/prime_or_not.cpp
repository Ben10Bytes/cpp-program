// prime_or_not.cpp
// This program checks if a number is prime or not using a while loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 2;
    
    while(i<n){
        if(n % i ==0){
            cout << "Not Prime" << endl;
            return 0;

        }
        i++; // i = i + 1;
    }
    cout << "Prime" << endl;
}