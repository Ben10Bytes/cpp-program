// Funciton using

#include<iostream>
using namespace std;
int mulitply(int a, int b){
    return a * b;

}
int main(){
    int num1, num2;

    cout << "Enter a first number : ";
    cin >> num1;

    cout << "Enter a second number : ";
    cin >> num2;

    int result = mulitply(num1 , num2);

    cout << "Multiplication of two number : " << result;
    return 0;
}