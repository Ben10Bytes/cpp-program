#include<iostream>
using namespace std;

class Appliance{

public:
    virtual void turnOn() = 0;
};

class Fan : public Appliance{

public:
    void turnOn(){
        cout <<"Fan Rotates" << endl;
    }
};

class Tv : public Appliance{

public:

    void turnOn(){
        cout << "TV Display Pictures" << endl;
    }
};

int main(){
    Appliance* a1 = new Fan();
    Appliance* a2 = new Tv();

    a1->turnOn();
    a2->turnOn();

    return 0;
}