#include<iostream>
#include<ctime>
using namespace std;

int main(){
    int arr[] = {3, 9, 5, 12, 8, 2};
    int max = arr[0];

    clock_t start = clock();
    
    for(int i = 1; i < 6; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    clock_t end = clock();
    double time_taken = double(end - start) / CLOCKS_PER_SEC;

    cout << "Greatest Number = " <<max << endl;

    cout << "Time Taken = " << time_taken << "seconds" <<endl;
    return 0;
}

