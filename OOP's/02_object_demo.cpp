#include<iostream>
#include<string>
using namespace std;

class Person {
    std::string name;

public:
    void setName(std::string n) {
        name = n;
    }

    void display() {
        cout<< "Hello my name :" << name << std::endl;

    }
};

int main(){
    Person p;
    p.setName("Rohit");
    p.display();
    
    return 0;
}