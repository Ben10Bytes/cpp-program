


//    <<   PRACTICAL 5   >>

//Aim :- HILL CIPHER ENCRYPTION AND DECRYPTION USING C++

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, j, k;
    int size;

    cout << "Enter matrix size (2 or 3): ";
    cin >> size;

    int key[5][5], inverseKey[5][5];

    cout << "\nEnter Key Matrix (" << size << "x" << size << "):\n";
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            cin >> key[i][j];
        }
    }

    string plaintext;
    cout << "\nEnter Plain Text (lowercase only): ";
    cin >> plaintext;

    while(plaintext.length() % size != 0)
    {
        plaintext += 'x';
    }

    string encrypted = "";

    for(i = 0; i < plaintext.length(); i += size)
    {
        for(j = 0; j < size; j++)
        {
            int sum = 0;

            for(k = 0; k < size; k++)
            {
                sum += key[j][k] * (plaintext[i + k] - 'a');
            }

            encrypted += char((sum % 26) + 'a');
        }
    }

    cout << "\nEncrypted Text : " << encrypted << endl;

    cout << "\nEnter Inverse Key Matrix (" << size << "x" << size << "):\n";

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            cin >> inverseKey[i][j];
        }
    }

    string decrypted = "";

    for(i = 0; i < encrypted.length(); i += size)
    {
        for(j = 0; j < size; j++)
        {
            int sum = 0;

            for(k = 0; k < size; k++)
            {
                sum += inverseKey[j][k] * (encrypted[i + k] - 'a');
            }

            sum = sum % 26;

            if(sum < 0)
                sum += 26;

            decrypted += char(sum + 'a');
        }
    }

    cout << "\nDecrypted Text : " << decrypted << endl;

    return 0;
}