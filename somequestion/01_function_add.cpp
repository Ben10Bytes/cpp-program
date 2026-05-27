#include<iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main(){
    Calculator calc;

    cout << "Result of add(4, 5): " << calc.add(4, 5) << endl;
    cout << "Result of add(10, 2): " << calc.add(10, 2) << endl;
    cout << "Result of add(10, 10, 10): " << calc.add(10, 10, 10) << endl;

    return 0;
}

