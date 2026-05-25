#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << calc.add(5, 10) << endl;
    cout << calc.add(5.5, 11.5) << endl;
    cout << calc.add(5, 10, 5) << endl;

    return 0;
}