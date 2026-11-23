

// A A A A 
// B B B B 
// C C C C 
// D D D D 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : ";
    cin >> n;

    for(int i = 1; i<=n; i++){
        
        for(int j = 1; j<=n; j++){
            char ch = 'A' + i - 1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}