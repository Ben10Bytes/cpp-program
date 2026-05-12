// #include<iostream>
// using namespace std;
// int main(){
//     string items[] = {"apple","banana","kivi","lichi","guava"};
//     items[1] = "mango";

//     for(int i =2; i<4; i++){
//         items[i] = items[i + 1];
//     }
//     for(int i = 0; i < 4; i++){
//         cout << items[i] << " ";
//     }

//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;

int main(){
    string arr[6] = {"kanish", "yash", "karan", "Dev"};
    int size = 4;

    cout << "Original Array:--> ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;
    
    //insert elemnt 

    string insertname = "krish";
    int insertPos = 3;
    for(int i = size; i > insertPos; i--){
        arr[i] = arr[i-1];
    }
    arr[insertPos] = insertname;
    size++;

    cout << "Inserted Array:--> ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;
    
    //updste elemnt

    int updatePos = 1;
    string updateName = "Raj";
    arr[updatePos] = updateName;

    cout << "After Updating:--> ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //delete elemnt

    int deletePos = 3;
    for(int i = deletePos; i < size - 1; i++){
        arr[i] = arr[i+1];
    }
    size--;

    cout << "After Deleting:--> ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}