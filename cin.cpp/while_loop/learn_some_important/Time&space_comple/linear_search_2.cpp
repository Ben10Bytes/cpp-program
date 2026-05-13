#include<iostream>
using namespace std;
int main(){

    int arr[] = {10, 20, 30, 40, 50};
    int target = 30;
    int found = 0;

    for(int i = 0; i < 5; i++){
        if(arr[i] == target){
            cout<< "Element Found at Index = " << i << endl;
            found = 1;
            break;
        }
    }

    if(found == 0){
        cout << "Element Not Found";

    }

    return 0;

}