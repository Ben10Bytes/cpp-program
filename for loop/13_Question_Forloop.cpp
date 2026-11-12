
//Question 1

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0; i<=5; i++){
//         cout<<i<<" ";
//         i++;
//     }
// }

//Output is 0 2 4

//Question 2

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0; i<=5; i--){
//         cout<<i<<" ";
//         i++;
//     }
// }

//Output is  Infinte loop


//Question 3

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0; i<=15; i+=2){
//         cout<<i<<" ";
//         if(i&1){
//             continue;
//         }
//         i++;
//     }
// }

// Output is  0 3 5 7 9 11 13 15


// Question 4

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i = 0; i <= 10; i += 2){
//         cout << i << " ";

//         if(i & 1){
//             continue;
//         }

//         i++;
//     }
// }

//Output is  0 3 5 7 9 


// Question 5

#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<5; i++){ // Manager loop
        for(int j=i; j<=5; j++){ // worker loop 
            cout<<i<<" "<<j<<endl;
        }
    }
}

