// Star Pattern for equal row and coulmn
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j =1;

        while(j<=n){
            cout<<"*" <<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }
}