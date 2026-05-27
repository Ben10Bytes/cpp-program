#include<iostream>
using namespace std;

// Abstract class (Interface-like)
class PaymentMethod {
public:
    virtual void pay(int amount) = 0;
};

// CreditCard class
class CreditCard : public PaymentMethod {
public:
    void pay(int amount) override {
        cout << "Paid " << amount << " using Credit Card" << endl;
    }
};

// PayPal class
class PayPal : public PaymentMethod {
public:
    void pay(int amount) override {
        cout << "Paid " << amount << " using PayPal" << endl;
    }
};

int main() {

    PaymentMethod* p;
    int choice, amount;

    cout << "Select Payment Method" << endl;
    cout << "1. Credit Card" << endl;
    cout << "2. PayPal" << endl;

    cout << "Enter choice : ";
    cin >> choice;

    cout << "Enter amount : ";
    cin >> amount;

    // Generate object based on user choice
    if(choice == 1) {

        CreditCard cc;
        p = &cc;
        p->pay(amount);

    }
    else if(choice == 2) {

        PayPal pp;
        p = &pp;
        p->pay(amount);

    }
    else {

        cout << "Invalid Choice" << endl;

    }

    return 0;
}