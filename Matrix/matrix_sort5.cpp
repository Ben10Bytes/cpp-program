#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 0, 3, 4};

    // Print non-zero elements
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }

    for(int i = 0; i < 5; i++){
        if(arr[i] == 0){
            cout << arr[i] << " ";
        }
    }

    cout << 0;
    return 0; 
}