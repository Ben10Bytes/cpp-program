#include <iostream>
using namespace std;



int main() {

    int num, original, reverse = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num > 0) {

        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    if(original == reverse)
        cout << "Palindrome Number";
    else
        cout << "Not Palindrome";

    return 0;
}