// This program calculates the sum of all prime numbers up to a given number n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int num = 2;
    int sum = 0;

    while(num <= n){
        int i = 2;
        int isPrime = 1; // Assume num is prime

        while(i< num){
            if(num % i == 0){
                isPrime = 0; // num is not prime
            }
            i++;
        }
        if(isPrime == 1){
            sum = sum + num; // Add the prime number to the sum
        }
        num++; // Move to the next number
    }
    cout << "Sum of prime numbers is: " << sum << endl; // Output the sum of prime numbers
    return 0;   
}