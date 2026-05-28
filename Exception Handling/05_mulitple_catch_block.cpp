#include<iostream>
using namespace std;

int main() {

    int num, index;
    int arr[3] = {10, 20, 30};

    try {

        cout << "Enter an integer = ";
        cin >> num;

        cout << "Enter index(0-2) = ";
        cin >> index;
        if(num == 0) {
            throw 0;
        }
        if(index < 0 || index > 2) {
            throw 'A';
        }

        cout << "Result = " << arr[index] / num << endl;
    }
    catch(int x) {
        cout << "Can't divide by zero" << endl;
    }
    catch(char c) {
        cout << "Array index out of bound" << endl;
    }

    return 0;
}