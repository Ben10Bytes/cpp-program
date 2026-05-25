#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;

public:
 
    Student() {
        std::cout << "Constructor called: Creating a new student record..." << std::endl;
        name = "Unknown";
        rollNumber = 0;
    }


    void setDetails(std::string name, int rollNumber) {
        this->name = name;
        this->rollNumber = rollNumber;
    }

    void displayInfo() {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

int main() {

    Student s; 
    s.setDetails("Rohit", 101);
    s.displayInfo();

    return 0;
}