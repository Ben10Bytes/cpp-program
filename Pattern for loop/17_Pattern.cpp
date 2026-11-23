
// A  
// B  C  
// D  E  F  
// G  H  I  J

#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the Input : ";
    cin >> n;

    char ch = 'A';
    char value = ch;
    for(int i = 1; i<=n; i++){
        
        for(int j = 1; j<=i; j++){
            cout<<value<<"  ";
            value++;
        }
        cout<<endl;
    }
}