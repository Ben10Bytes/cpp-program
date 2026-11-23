

//  1     2     3     4
//  5     6     7     8
//  9    10    11    12
// 13    14    15    16

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input : ";
    cin>>n;

    int count = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            //cout<<setw(6)<<count; fix the space between the number
            count = count + 1;
        }
        cout<<endl;
        
    }
    
    
    
}