#include <iostream>
#include <string>

class User {
public:
    std::string name;
    int age;
    std::string address;
};

int main() {
    User user;

    user.name = "Parul";
    user.age = 50;
    user.address = "Gujrat";

    std::cout << "User name: " << user.name << std::endl;
    std::cout << "User age: " << user.age << std::endl;
    std::cout << "User address: " << user.address << std::endl;

    return 0;
}