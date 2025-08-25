// This program checks if a number is prime or not using a while loop.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 2;
    // Start checking from the first prime number, which is 2
    // A prime number is greater than 1 and has no divisors other than 1

    if(n <= 1){
        cout << "Not Prime" << endl;
        return 0;
    }
    
    while(i<n){  // while(i <= n) is toatally wrong, we need to check divisors less than n
        if(n % i ==0){ 
            cout << "Not Prime" << endl;
            return 0; // Exit the program if not prime  

        }
        i++; // i = i + 1;
    }
    cout << "Prime" << endl;
}

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 2;
    while(i<n){
        if(n%i==0){
            cout<<"Not prime"<<endl;    
        }
        else{
            cout<<"Prime"<<endl;
        }
         i++;       
    }
}
*/