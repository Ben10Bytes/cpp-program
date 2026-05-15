#include<iostream>
using namespace std;
int main()

{
    int arr1[] = {1,2,3};

    int arr2[] = {4,5,6};

    int merge[6];

    for(int i = 0; i < 3; i++)
    {
        merge[i] = arr1[i];
    }

    for(int i = 0; i < 3; i++)
    {
        merge[i + 3] = arr2[i];
    }

    cout << "Merged Array: {";
    for(int i = 0; i < 6; i++){
        cout << merge[i];
        
        if(i != 5){
            cout << ",";
        }
    }
    cout << "}";
    return 0;

}