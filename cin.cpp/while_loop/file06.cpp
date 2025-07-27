// This program calculates the sum of all odd numbers from 1 to n using a while loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while(i <= n){
        if(i % 2 !=0){
            sum = sum + i; // Add the odd number to the sum
        }
        i++; // Increment i to check the next number
    }
    cout << "Sum of odd numbers is: " << sum << endl; // Output the sum of odd numbers
}