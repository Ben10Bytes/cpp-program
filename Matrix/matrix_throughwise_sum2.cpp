#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int i =0; i<3; i++){
        int sum = 0;
        cout << "{";

        for(int j =0; j < 3; j++){
            cout<< arr[i][j];
            sum = sum + arr[i][j];

            if(j != 2){
                cout << ",";
            }
        }
        cout << "} = " << sum << endl;
    }
    return 0;
}