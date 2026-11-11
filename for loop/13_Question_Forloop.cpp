
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

//Infinte loop


#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i<=15; i+=2){
        cout<<i<<" ";
        if(i&1){
            continue;
        }
        i++;
    }
}

// 0 3 5 7 9 11 13 15

