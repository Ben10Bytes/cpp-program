#include<iostream>
#include<string>
using namespace std;

class Vehicle {
public:
    string brand = "Generic";
    void honk() {
        cout << "Beep Beep" << endl;
    }
};

class Car : public Vehicle{
public:
    string model = "Sedan";
    void showDetails() {
        cout << brand << " " << model << endl;
    }
};

int main() {
    Car c;
    c.showDetails();
    c.honk();
    return 0;
}
