#include<iostream>
using namespace std;

class Main{
public:

    static int countDigits(int n) {
        if (n < 10) {
            return 1;
        }
        return 1 + countDigits(n/10);
    }
};
int main(){
    int number = 987654;

    cout << "Digits in " << number << " = " << Main::countDigits(number) << endl;
    return 0;

    
}