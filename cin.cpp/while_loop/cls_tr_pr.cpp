// #include<iostream>
// using namespace std;
// int main(){
//     string x ="10";
//     int y = 5;

//     string z = x + y;

#include <iostream>
using namespace std;

void printArray(int arr[], int size, string message) {
    cout << message << endl;

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void question1PrintAll() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = 5;

    cout << "=== print all elements ===" << endl;

    printArray(arr, size, "Array Elements:");
}

int main() {

    question1PrintAll();

    return 0;
}