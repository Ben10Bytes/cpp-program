#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int sum = 0;

    for(int i = 1; i <=n; i++){
        cout<<i<<" ";
        sum += i;
    }
    cout << endl;
    cout <<"Sum of Natural No. : "<< sum;
}