#include<iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    Calculator calc;

    std::cout << "Sum : " << calc.add(10, 20) <<std::endl;
    std::cout << "Multiply : " <<calc.multiply(5,15) << std::endl;

    return 0;
}