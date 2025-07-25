// create a equal number of rows and columns with same number using while loop

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