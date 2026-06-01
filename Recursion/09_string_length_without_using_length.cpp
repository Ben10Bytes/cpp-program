#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "programming";
    int count = 0;

    for (char c : str){
        count++;
    }
    cout << "The length fo the string is: " << count << endl;
    return 0;
}