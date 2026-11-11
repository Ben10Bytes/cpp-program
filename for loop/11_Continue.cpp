#include<iostream>
using namespace std;
int main(){

    int i;
    
    for(i=1; i<=5; i++){
        if(i==2 || i==4){ // Skip the this iteration. 
            continue;
        }
        cout<<i<<" ";
    }
}