
// D  
// C  D  
// B  C  D  
// A  B  C  D 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : ";
    cin>>n;

    char ch = 'D';
    
    for(int i = 1; i<=n; i++){
        char value = ch;
        for(int j = 1; j<=i; j++){
            cout<<value<<"  ";
            value++;
        }
        ch--;
        cout<<endl;
    }
}