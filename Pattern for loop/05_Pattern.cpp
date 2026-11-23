
// Print sum of Even no. between 1 to N;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : ";
    cin >> n;

    int sum = 0;

    for(int i = 2; i<=n; i+=2){
        sum+=i;
    }
    cout<<sum;
}