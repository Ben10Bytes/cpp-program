// The sum of 1 to n numbers using a while loop

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 1;
    int sum = 0;

    while(i<=n){
        sum = sum + i;
        i = i + 1;
    }
    cout<<"The sum of number is : "<<sum <<endl;
}