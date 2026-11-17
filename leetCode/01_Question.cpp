#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Input : ";
    cin >> n;

    int reverseDigit = 0;
    while(n!=0){
        int placeDigit = n % 10;
        if((reverseDigit > INT_MAX / 10) || (reverseDigit < INT_MIN / 10)){
            cout<<"The Reverse Number is : 0 ";
            return 0;
        }
        reverseDigit = (reverseDigit * 10) + placeDigit;
        n = n / 10;
    }
    cout<<"The Reverse Number is : "<<reverseDigit;
}