

// Decimal to Binary

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : ";
    cin >> n;
    
    int binary = 0;
    int place = 1;

    while(n != 0){
        int rem = n & 1; // Find bit 
        binary = rem * place + binary;
        n = n >> 1;  // Right shift the bit
        place = place * 10;

    }
    cout <<"The Binary is : "<<binary;
}
