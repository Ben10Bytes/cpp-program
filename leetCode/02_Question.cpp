#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the Input : ";
    cin >> n;

    int temp = n;
    int mask = 0;

    if(n==0){
        cout<<"Bitwise Compliment is : 1 ";
    }

    while(temp!=0){
        mask = (mask << 1) | 1;
        temp = temp >> 1;
    }
    int ans = (~n) & mask;
    cout<<"Bitwise Compliment is : "<<ans<<endl;
    return 0;
}