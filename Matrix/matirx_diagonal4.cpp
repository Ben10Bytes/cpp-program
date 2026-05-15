#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout << "Diagonal Elements:" <<endl;

    for(int i = 0; i < 3; i++){
        for(int space = 0; space < i; space++){
            cout << "   ";
        }
        cout << arr[i][i] << endl;
    
    }
    return 0;

}