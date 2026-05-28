
#include<iostream>
#include<limits>
using namespace std;

int main() {
    int age = 0;
    bool valid = false;

    while (!valid) {
       try {
        cout << "Enter Your Age (Number Only):\n";

        if(!(cin >> age)){
            throw runtime_error("Input Mismatch Error");
        }
        valid = true;
       } 

       catch (const runtime_error& e) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
       }
    }
    return 0;
    
    
}