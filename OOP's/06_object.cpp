// paasing data for one object to anthoer object using cope constructor
#include <iostream>
#include<string>

using namespace std;

class Student {
public:
    string name;
    int marks;

    Student(string name, int marks) {
        this->name = name;
        this->marks = marks;
    }

    Student(const Student &other) {
        this->name = other.name;
        this->marks = other.marks;
    }

    void display() {
        cout << "Name: " << name << " , Marks: " << marks << endl;
    }
};

int main(){

    Student s1("Rajan", 85);
    cout << "s1: ";
    s1.display();

    Student s2 = s1;
    cout << "s2 (Copied): ";
    s2.display();

    return 0;
}