#include<iostream>
using namespace std;

// Interface like structure in C++
class Animal {
public:
    // Pure virtual function
    virtual void sound() = 0;
};

// Dog class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog Barks" << endl;
    }
};

// Cat class
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat Meows" << endl;
    }
};

int main() {

    Animal* a;

    // Dog object
    Dog d;
    a = &d;
    a->sound();

    // Cat object
    Cat c;
    a = &c;
    a->sound();

    return 0;
}