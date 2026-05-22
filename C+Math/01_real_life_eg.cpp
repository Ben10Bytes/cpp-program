#include<iostream>
using namespace std;
int main(){
    // int myAge;
    // int votingAge = 18;

    // cout<<"Enter the Age : ";
    // cin>>myAge;
    // cout<<"Eligible for voting "<<(myAge>=votingAge);


    int myAge;
    int votingAge = 18;
    
    cout<<"Enter your age : ";
    cin>>myAge;

    if(myAge>=votingAge){
        cout<<"Eligible for voting"<<endl;
    } else{
        cout<<"Not Eligible for voting";
    }
}