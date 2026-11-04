#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    int i, j;
    string str, key;
    int numstr[100], numkey[100], numcipher[100];
    
    cout <<"Enter a string text to encrypt\n";
    getline(cin, str);

    for(i = 0, j = 0; i <str.length(); i++){
        if(str[i]!=' '){
            str[j] = toupper(str[i]);
            j++;
        }
    }
    str.resize(j);

    for (i = 0; i < str.length(); i++){
        numstr[i] = str[i] - 'A';
    }

    cout << "Enter key string of random text\n";
    getline(cin, key);

    for (i = 0, j = 0; i < key.length(); i++){
        if(key[i] != ' '){
            key[j] = toupper(key[i]);
            j++;
        }
    }
    key.resize(j);

    if (key.length() < str.length()){
        cout << "Key must be at least as long as plaiintext.\n";
        return 0;
    }

    for (i = 0; i <key.length(); i++){
        numkey[i] = key[i] - 'A';
    }
    for(i = 0; i < str.length(); i++){
        numcipher[i] = numstr[i] + numkey[i];
        
        if (numcipher[i] > 25){
            numcipher[i] = numcipher[i] - 26;
        }
    }
    cout << "One Time Pad Cipher text is \n";

    for (i = 0; i < str.length(); i++){
        cout << char(numcipher[i] + 'A');
    }
    cout << endl;
    return 0;
}
