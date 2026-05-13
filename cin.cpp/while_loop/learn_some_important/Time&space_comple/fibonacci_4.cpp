#include<iostream>
#include<ctime>
using namespace std;
int main(){

    int n = 10;
    int a = 0;
    int b = 1;
    int c;

    clock_t start = clock();
    
    for(int i = 3; i <=n; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    clock_t end = clock();
    double time_taken = double(end - start) / CLOCKS_PER_SEC;
    cout << endl;
    cout << "Time Taken = " << time_taken << " seconds";
    return 0;
}