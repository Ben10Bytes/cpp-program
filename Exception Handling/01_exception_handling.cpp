#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
    int num, den;
    cout << "Enter numerator: \n";
    if(!(cin >> num)) return 1;

    try {
        if (den ==0) {
            throw runtime_error("divided by zero");
        }
        int result = num / den;
        cout << "Result : " << result << "\n";
    }

    catch (const runtime_error& e) {
        cout << "Exception Caught: / " << e.what() << "\n";
        cout << "You cannot divide by zero !\n";
    }
    return 0;
}
