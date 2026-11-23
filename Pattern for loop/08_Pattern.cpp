
// Checking Prime or Not

#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the Input : ";
    cin >>n;

    int i;
    for(i = 2; i<=n; i++){
        if(n % i == 0){
            break;
        }
    }
    if(i == n){
        cout<<"Prime no.";
    }
    else{
        cout<<"Not Prime";
    }
}
