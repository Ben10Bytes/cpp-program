#include<iostream>
using namespace std;
int main(){
    int arr[] = { 10, 20, 30, 40, 50 };

    int n = 5;
    int key = 40;

    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid]==key){
            cout << "Element Found at index " << " " << mid;
            return 0;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout << "Element not found";
    return 0;
}