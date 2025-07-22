#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int i = 2; // Start from the first even number
    while(i <= n){
        sum += i; // Add the even number to the sum
        i += 2; // Move to the next even number
        
    }
    cout <<"Sum of even number is : "<< sum <<endl;
}
