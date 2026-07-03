//     <<    PRACTICAL 4    >>


// AIM :- To implement Polyalphabetic (Vigenère) Cipher Encryption and Decryption using C++.


#include <iostream>
#include <string>
using namespace std;

// Function to generate repeated key
string generateKey(string text, string key)
{
    int x = text.length();

    for (int i = 0; ; i++)
    {
        if (x == key.length())
            break;

        key += key[i];
    }

    return key;
}

// Encryption
string encrypt(string text, string key)
{
    string cipher = "";

    for (int i = 0; i < text.length(); i++)
    {
        char ch = ((text[i] - 'a') + (key[i] - 'a')) % 26 + 'a';
        cipher += ch;
    }

    return cipher;
}

// Decryption
string decrypt(string cipher, string key)
{
    string text = "";

    for (int i = 0; i < cipher.length(); i++)
    {
        char ch = ((cipher[i] - key[i] + 26) % 26) + 'a';
        text += ch;
    }

    return text;
}

int main()
{
    string plaintext, key;

    cout << "Enter Plain Text (lowercase): ";
    cin >> plaintext;

    cout << "Enter Key: ";
    cin >> key;

    key = generateKey(plaintext, key);

    cout << "\nGenerated Key : " << key << endl;

    string cipher = encrypt(plaintext, key);

    cout << "Encrypted Text : " << cipher << endl;

    string original = decrypt(cipher, key);

    cout << "Decrypted Text : " << original << endl;

    return 0;
}


