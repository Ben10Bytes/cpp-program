#include<iostream>
using namespace std;
int main(){
    
    char ch;
    cout << "Enter the Character : ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z'){
        cout << "Capital letter";
    }

    else if (ch >= 'a' && ch <= 'z'){
        cout << "Small letter";
    }

    else if (ch >= '0' && ch <= '9'){
        cout << "Numeric";
    }

    else{
        cout << "Special Character";
    }

    return 0;
}