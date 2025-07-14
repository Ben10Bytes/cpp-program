#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a : " <<endl;
    cin>>a;

    if(a>0){
        cout<<"This is positive number"<<endl;
    }

    else if(a<0){
        cout<<"This is negative number"<<endl;
    }
    
    else{
        cout<<"This is zero"<<endl;
    }
}