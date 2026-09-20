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

// 1 
// 2  1
// 3  2  1
// 4  3  2  1


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
//             cout << value;
//             value = value - 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// A A A A 
// B B B B 
// C C C C 
// D D D D


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         char ch = 'A' + i -1;
//         while(j <= n){
//             cout<<ch<<"  ";
//             j = j + 1;


//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }



// A  B  C  D 
// A  B  C  D 
// A  B  C  D 
// A  B  C  D 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
        
//         while(j <= n){
//             char ch = 'A' + j - 1;
//             cout << ch;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// A  B  C  D 
// E  F  G  H 
// I  J  K  L  
// M  N  O  P


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     char ch = 'A';
//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             cout<<ch<<"  ";
//             ch = ch + 1;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }



// A B C D 
// B C D E 
// C D E F 
// G H I J 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             char ch = 'A' + i + j - 2;
//             cout << ch << "  ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }



// A 
// B  B 
// C  C  C  
// D  D  D  D 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         char ch = 'A' + i - j;
//         while(j <= i){   
//             cout << ch << "  ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }




// A 
// B  C  
// D  E  F 
// G  H  I  J 



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     char value = 'A';

//     while(i <= n){
//         int j = 1;
//         while(j <= i){
//             cout <<value << "  ";
//             value = value + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }


// D 
// C  D  
// B  C  D 
// A  B  C  D 


#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 1;
    

    while(i <= n){
        int j = 1;
        char value = 'D' + j - i; // 'A' + n - i;
        while(j <= i){
            cout << value << "  ";
            value = value + 1;

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
    











