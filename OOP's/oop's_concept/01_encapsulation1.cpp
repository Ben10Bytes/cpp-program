#include<iostream>
using namespace std;
class Animal{
public:
    void eat(){
        cout<<"Eating";
    }
};

class Dog : public Animal{

};

int main(){
    Dog d;
    d.eat();
    return 0;
}