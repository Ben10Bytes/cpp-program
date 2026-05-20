/*Substring is used when we want to:

extract specific text
split data
check words
parse strings
work with usernames/emails/files*/

#include<iostream>
using namespace std;
int main(){
    string s = "C++ programming language";

    cout <<s.substr(15)<<endl;
    cout <<s.substr(3, 20);

    return 0;
}