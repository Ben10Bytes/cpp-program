#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    
    cout<<"first side: ";
    cin>>a;

    cout <<"Second side: ";
    cin>>b;

    cout <<"Third side: ";
    cin>>c;

    if((a + b > c) && (b + c > a) && (a + c > b)){
        cout<<"valid";
    }else{
        cout<<"Invalid";
    }
    return 0;
}