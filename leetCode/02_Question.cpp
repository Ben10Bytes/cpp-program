

//  leetCode 
//  Question no. 1009. Complement of Base 10 Integer

// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the Input : ";
    cin >> n;

    int temp = n;
    int mask = 0;

    if(n==0){
        cout<<"Bitwise Compliment is : 1 ";
    }

    while(temp!=0){
        mask = (mask << 1) | 1;
        temp = temp >> 1;
    }
    int ans = (~n) & mask;
    cout<<"Bitwise Compliment is : "<<ans<<endl;
    return 0;
}