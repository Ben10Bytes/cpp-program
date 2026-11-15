#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the Input : ";
    cin >> n;

    int decimal = 0;
    int place = 1;

    while(n!=0){
        int rem = n % 10;
        decimal = rem * place + decimal;
        place = place * 2;
        n = n/10;
    }
    cout<<"Decimal is : "<<decimal;
}