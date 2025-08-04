// Pattern printing for equal row and column but each row contains the row number

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i <=n){
        int j = 1;
        while(j <=n){
            cout << i << " "; 
            j++;
            
        }
        cout << endl; // Move to the next line after printing one row
        i++; // Move to the next row
    }
}