#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the input: ";
    cin>>n;
    
    int count = 0;
    int sum = 0;
    for(int i = 2; i<=n; i++){
        
        int j;
        for(j = 2; j<i; j++){
            if(i%j==0){
                break;

            }
        }
        if(j==i){
            cout<<j<<" ";
            count = count + 1;
            sum = sum + j;
        }
    }
    cout<<endl;
    cout <<"count = "<<count;
    cout <<"\nSum of prime number is "<<sum;
}