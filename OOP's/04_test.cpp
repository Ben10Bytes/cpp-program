#include<iostream>

class Test {
public:
    Test() {
        std::cout << "Default Cosntructor Called" << std::endl;
    }
};

int main(){
    Test t;
    return 0;
}