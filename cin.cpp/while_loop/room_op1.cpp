#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 6;
    cout<<(!(x < y && y > x));
    return 0;
}