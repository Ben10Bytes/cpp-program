#include<iostream>
using namespace std;
int main(){
    string items[] = {"apple","banana","kivi","lichi","guava"};
    items[1] = "mango";

    for(int i =2; i<4; i++){
        items[i] = items[i + 1];
    }
    for(int i = 0; i < 4; i++){
        cout << items[i] << " ";
    }

    return 0;
}