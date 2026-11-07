#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the No. : ";
    cin >> n;

    int sum = 0;

    for(int i = 1; i<=n; i+=2){
        cout << i<<" ";
        sum = sum + i;
    }
    cout<<endl;
    cout <<"Sum of Odd No. : "<<sum;
}