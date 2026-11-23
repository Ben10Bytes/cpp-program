
// Print Odd no. b/w 1 to N;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : ";
    cin >> n;

    for(int i = 1; i<=n; i++){
        if(i % 2 != 0){
            cout<<i<<" ";
        }
    }
}