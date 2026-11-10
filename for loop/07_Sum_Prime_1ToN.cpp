//Sum of Prime number 1 to n;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the input: ";
    cin >>n;

    int sum = 0;
    for(int i = 2; i<=n; i++){

        int j;
        for(j=2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<j<<" ";
            sum = sum + j;
            
        }   
    }
    cout<<endl;
    cout<<"Sum of Prime no. is "<<sum;
    
}