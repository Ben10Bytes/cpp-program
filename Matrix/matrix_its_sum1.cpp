#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;
    int single[9];
    int k = 0;
    cout<<"Matrix:"<< endl;

    



    // Print Matrix and Calculate Sum, Store in Single Array

    for(int i = 0; i < 3; i++){
        for(int j =0; j < 3; j++){
            cout << arr[i][j] << " ";

            sum = sum + arr[i][j];
            single[k] = arr[i][j];
            k++;
        }
        cout << endl;
    
    }
    cout << endl;

    // Convert Matrix into Single Array Format

    cout << "Single Array: {";

    for(int i = 0; i < 9; i++){
        cout << single[i];
        if(i != 8){
            cout<< ",";
        }
    }

    cout << "}";

    cout << endl << endl;


    // Reverse Single Array

    cout << "Reverse Array; {";
    
    for(int i = 8; i>=0; i--){
        cout << single[i];
        if(i != 0){
            cout<< ",";

        }
    }

    cout << "}";

    cout << endl << endl;

    cout << "Total Sum = " << sum << endl;

    return 0;

}