
// Print Even no. between 1 to N;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the User Input : ";
    cin >> n;

    for(int i = 2; i<=n; i+=2){
        cout<<i<<" ";
    }
}