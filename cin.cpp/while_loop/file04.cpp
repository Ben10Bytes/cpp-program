// This program prints all odd numbers from 1 to n using a while loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        if(i % 2 != 0) { // Check if the number is odd      if(i % 2 != 0) this is also correct    
            cout << i << "  "; // Print the odd number
        }
        i++; // Increment i to check the next number
    }
}