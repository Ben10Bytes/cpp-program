#include<iostream>
#include<string>
using namespace std;

class Animal {
protected:
    string name;

public:

    Animal(string animalName) : name(animalName){}

    void eat(){
        cout << name << "is eating food." << endl;
    }
    void sleep() {
        cout << name << "is sleeping. Zzz...." << endl;
    }
};

class Dog : public Animal {
public:

    Dog(string dogName) : Animal(dogName) {}

    void bark() {
        cout << name << "says: Woof! Woof!" << endl;
    }
};

int main(){

    Dog myDog("Buddy");
    myDog.eat();
    myDog.sleep();
    myDog.bark();

    return 0;
}