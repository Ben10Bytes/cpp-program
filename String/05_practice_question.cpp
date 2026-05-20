#include<iostream>
using namespace std;
int main(){
    string s1 = "Java is Java Language";
    cout<<s1.replace(0,20,"Python is Python Language")<<endl;

    for(int i = 0; i < s1.length(); i++){
        if(s1[i]==' '){
            s1[i]='-';

        }
    }
    cout<<s1;
    return 0;
}