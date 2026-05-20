/* Reading each chracter of a string one by one 
Iterating over a string
because loop iterates through all characters. */


#include<iostream>

using namespace std;
int main(){
    string s1 = "Parul university";

    for(int i = 0; i < s1.length(); i++){
        cout<< "index "<< i << " : " <<s1.at(i)<<endl;
    }

    cout<<s1<<endl;
    
    return 0;
}