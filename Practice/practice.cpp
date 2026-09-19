// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<j;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             cout << n - j + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
    
//     int i = 1;
//     int count = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             cout <<count<<"   ";
//             count = count + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while (j<=i){
//             cout << " * ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while( i <= n){
//         int j = 1;
//         while(j <= i){
//             cout <<i;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     int count = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= i){
//             cout <<count;
//             count = count + 1;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         int value = i;
//         while(j <= i){
//             cout<< value;
//             value = value + 1;
//             j = j +1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 0;
//     while(i <= n){
//         int j = 1;
//         int value = i;
//         while(j <= i){
//             cout <<value;
//             value = value - 1;
//             j = j + 1;
//         }
//         cout <<endl;
//         i = i + 1;
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
int main (){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        char ch = 'A' + i - 1;
        while(j <= n){
            cout <<ch <<"  ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}