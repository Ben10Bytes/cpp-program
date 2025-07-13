//Greater and equal to condition 
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<" Enter the value of a :"<<endl;
    cin>>a;

    cout<<" Enter the value of b :"<<endl;
    cin>>b;

    if(a>b){
        cout<<" a is greater then b "<<endl;
    }
    else if(a==b){
        cout<<" a and b is equal "<<endl;
    }
    else{
        cout<<" b is greater then a "<<endl;
    }
}
