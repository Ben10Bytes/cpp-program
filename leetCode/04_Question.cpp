

// Question . 231. Power of Two

// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : ";
    cin>>n;

    if(n<=0){
        cout<<"false";
    }
    while(n%2==0){
        n = n/2;
    }
    if(n==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}