#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;

public:
    // 1. CONSTRUCTOR (Runs automatically when object is created)
    Student() {
        std::cout << "Constructor called: Creating a new student record..." << std::endl;
        name = "Unknown";
        rollNumber = 0;
    }

    // 2. METHOD 1: Setter (Uses 'this' keyword to avoid name confusion)
    void setDetails(std::string name, int rollNumber) {
        this->name = name;
        this->rollNumber = rollNumber;
    }

    // 3. METHOD 2: Display Function
    void displayInfo() {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

int main() {
    // 4. OBJECT (Creates an instance of the Student class)
    Student s; 

    // Calling the methods using the object
    s.setDetails("Rohit", 101);
    s.displayInfo();

    return 0;
}