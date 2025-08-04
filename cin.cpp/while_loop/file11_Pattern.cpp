// This code prints a paatern of numbers which is a square matrix of size n x n .
// Where numbers in each row are printed from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}