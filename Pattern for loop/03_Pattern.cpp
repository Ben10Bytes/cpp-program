
// Sum of Natural number between 1 to N;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : ";
    cin >> n;

    int sum = 0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<sum;
}
