

// 1  
// 2  3  
// 3  4  5  
// 4  5  6  7

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : ";
    cin>>n;
    int i;

    for(i =1; i<=n; i++){
        int value = i;
        for(int j=1; j<=i; j++){
            cout<<value<<"  ";
            value = value + 1;
            
        }
        cout<<endl;
    }
}