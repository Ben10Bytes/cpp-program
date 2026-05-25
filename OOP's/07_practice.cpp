#include<iostream>
#include<cmath>
using namespace std;

double findSquareRoot(double number) {
    return sqrt(number);
}

int main() {
    double num = 7.0;
    double result = findSquareRoot(num);
    cout << "The square root of " << num << " is: " << result << endl;
    return 0;
}
