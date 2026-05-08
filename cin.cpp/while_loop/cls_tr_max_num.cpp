// #include <iostream>
// using namespace std;

// // Function definition
// int maximum(int a, int b) {

//     if(a > b)
//         return a;
//     else
//         return b;
// }

// int main() {

//     int num1, num2;

//     cout << "Enter first number: ";
//     cin >> num1;

//     cout << "Enter second number: ";
//     cin >> num2;

//     int result = maximum(num1, num2);

//     cout << "Maximum number is: " << result;

//     return 0;
// }

#include <iostream>
using namespace std;

// Function definition
int maximum(int a, int b, int c) {

    if(a > b && a > c)
        return a;

    else if(b > a && b > c)
        return b;

    else
        return c;
    

}

int main() {

    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    int result = maximum(num1, num2, num3);

    cout << "Maximum number is: " << result;

    return 0;
}