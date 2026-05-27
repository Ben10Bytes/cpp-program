#include<iostream>
#include<string>
using namespace std;

class Display {
public:
    void show(int a, string b){
        cout << "Output int string (" << a << ", " << b << ");" << endl;
    }

    void show(string a, int b){
        cout << "Output int string (" << a << ", " << b << ");" << endl;
    }


    
};

int main() {
    Display d;

    d.show(10, "Hello");
    d.show("World", 20);
    return 0;
}