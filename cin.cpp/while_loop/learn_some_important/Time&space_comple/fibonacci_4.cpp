#include<iostream>
using namespace std;
int main(){

    int n = 10;
    int a = 0;
    int b = 1;
    int c;

    cout << a << " " << b << " ";
    
    for(int i = 3; i <=n; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;

    }
    return 0;
}