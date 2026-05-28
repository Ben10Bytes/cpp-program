#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    try {
        int value = numbers.at(10);
        cout << "Value at index 10: " << value << "\n";
    } 
    catch (const out_of_range& e) {
        cout << "Exception Caught: Array index out of Bounds!\n";
        cout << "Error details: " << e.what() << "\n";
    }

    return 0;
}