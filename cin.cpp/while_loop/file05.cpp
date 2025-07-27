// Program to find the sum of even numbers from 1 to n using a while loop

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int i = 2; // Start from the first even number
    while(i <= n){
        sum = sum + i; // Add the even number to the sum (sum += i;)
        i = i + 2; // Move to the next even number (i += 2; or i = i + 2; )
        // Alternatively, you could check if i is even: if(i % 2 == 0) { sum += i; }
        // But since we are starting from 2 and incrementing by 2, all i will be even.  
        
    }
    cout <<"Sum of even number is : "<< sum <<endl;
}
