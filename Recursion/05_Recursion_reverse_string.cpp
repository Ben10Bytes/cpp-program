#include <iostream>
#include <string>
#include <utility>
using namespace std;

void reverseString(string &str, int left, int right) {
    if (left >= right) {
        return;
    }
    swap(str[left], str[right]);
    reverseString(str, left + 1, right - 1);
}

int main() {
    string str = "abc";
    
    reverseString(str, 0, str.length() - 1);
    
    cout << str << endl;
    
    return 0;
}