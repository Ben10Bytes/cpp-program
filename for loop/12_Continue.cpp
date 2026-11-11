#include<iostream>
using namespace std;
int main(){

    int i;

    for(i = 1; i<=10; i++){
        if(i>=3 && i<=7){
            continue;
        }
        cout <<i<<" ";
    }
}