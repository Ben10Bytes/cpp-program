#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter the number : ";
    cin >>n;
    
    int a = 0;
    int b = 1;
    int next;

    for(int i = 1; i<=n; i++){
        cout << a << " " << endl;

        next = a + b;
        a = b;
        b = next;
        

    }
}