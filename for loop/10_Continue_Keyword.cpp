//

#include<iostream>
using namespace std;
int main(){
    
    int i;
    for(i = 1; i<=5; i++){
        if(i==3){ //Skips only the current iteration. When i==3 then current iteration will be skip , not print 3. Moves to the next iteration.
            continue;
        }
        cout<<i<<" ";
    }
}