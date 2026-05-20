#include<iostream>

using namespace std;
int main(){
    string s1 = "Parul university";
    string s2 = "C++ Programming";

    for(int i = 0; i < s1.length(); i++){
        cout<< "index "<< i << " : " +s1.at(i);
    }

    cout<<s1<<endl;
    cout<<s2<<endl;
    
    return 0;
}