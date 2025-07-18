//How to check upercase , lowercase and numeric value1

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Give me input :"<<endl;
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"The input is lowercase"<<endl;
    }

    else if(ch>='A' && ch<='Z'){
        cout<<"The input is upercase"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"The input is numeric value"<<endl;
    }

}