#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

    string str = "Programming";

    unordered_map<char, int> charCount;

    for(char ch : str) {

        charCount[ch]++;

    }
    
    for(char ch : str) {

        if(charCount[ch] != 0) {

            cout << ch << " = " << charCount[ch] << endl;

            charCount[ch] = 0;
        }
    }

    return 0;
}