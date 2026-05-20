#include<iostream>
using namespace std;
int main(){
    string s1 = "c++";
    string s2 = "c++";
    string s3 = string("c++");

    cout << "s1 == s2 : " << (s1==s2) << endl;
    cout << "s1 == s3 : " << (s1==s3) << endl;

    return 0;

}