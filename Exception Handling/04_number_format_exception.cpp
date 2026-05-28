#include<iostream>
#include<string>

using namespace std;
int main(){
    
    string str;
    cout <<"Enter a number / string" <<endl;
    cin >>str;


    try {
        int num = stoi(str);
        
        cout <<"Right Output : "<<num;
    }
    catch(invalid_argument e) {
        cout << "Numeric Format Exception" << endl;
    }

    return 0;
}