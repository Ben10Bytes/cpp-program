// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Input : ";
//     cin>>n;
//     char ch = 'A';

//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=i; j++){
            
//             cout<<ch<<"  ";
//         }
//         ch++;
//         cout<<endl;
//     }
// }


// Method - 2;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the Input : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        char ch = 'A' + i - 1;
        for(int j = 1; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}