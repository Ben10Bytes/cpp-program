#include<iostream>
using namespace std;

// Interface like structure in C++
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

    // CreditCard object
    CreditCard cc;

    p = &cc;

    p->pay(1500);

    // PayPal object
    PayPal pp;

    p = &pp;

    p->pay(2500);

    return 0;
}