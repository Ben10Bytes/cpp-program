// Not Proper code




#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int sum = 0;
    int i = 2;

    while(i < n){
        if(n % i == 0){
            cout << "Not Prime";
            return 0;
        }
        i = i + 1;
    }
    sum = sum + i;
    i = i + 1;
    cout <<"Sum of Prime : " << sum;
}