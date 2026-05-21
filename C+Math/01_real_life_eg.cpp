#include<iostream>
using namespace std;
int main(){
    int myAge;
    int votingAge = 18;

    cout<<"Enter the Age : ";
    cin>>myAge;
    cout<<"Eligible for voting "<<(myAge>=votingAge);
}