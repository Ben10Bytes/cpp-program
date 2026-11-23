// D  
// C  D  
// B  C  D  
// A  B  C  D  


#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        char start = 'D' + j - i; // 'A' + n - i;
        while(j <= i){
            cout << start << "  ";
            start = start + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}