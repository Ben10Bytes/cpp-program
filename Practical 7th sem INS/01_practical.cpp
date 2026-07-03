#include <iostream>
#include <cstring>

using namespace std;

void encryption();
void decryption();

int main()
{
    char choice;

    cout << "For Encryption Press e" << endl;
    cout << "For Decryption Press d" << endl;
    cin >> choice;

    switch(choice)
    {
        case 'e':
            encryption();
            break;

        case 'd':
            decryption();
            break;

        default:
            cout << "Invalid Input" << endl;
    }

    return 0;
}

void encryption()
{
    char mess[100], ch;
    int i, key, tot;

    cout << "Enter message to encrypt: ";
    cin >> mess;

    cout << "Enter key: ";
    cin >> key;

    for(i = 0; mess[i] != '\0'; i++)
    {
        ch = mess[i];

        if(ch >= 'a' && ch <= 'z')
        {
            tot = ch + key;

            if(tot > 'z')
                tot = ((tot - 'z') - 1) + 'a';

            mess[i] = (char)tot;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            tot = ch + key;

            if(tot > 'Z')
                tot = ((tot - 'Z') - 1) + 'A';

            mess[i] = (char)tot;
        }
    }

    cout << "Encrypted Message: " << mess << endl;
}

void decryption()
{
    char mess[100], ch;
    int i, key, tot;

    cout << "Enter message to decrypt: ";
    cin >> mess;

    cout << "Enter key: ";
    cin >> key;

    for(i = 0; mess[i] != '\0'; i++)
    {
        ch = mess[i];

        if(ch >= 'a' && ch <= 'z')
        {
            tot = ch - key;

            if(tot < 'a')
                tot = ((tot + 'z') + 1) - 'a';

            mess[i] = (char)tot;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            tot = ch - key;

            if(tot < 'A')
                tot = ((tot + 'Z') + 1) - 'A';

            mess[i] = (char)tot;
        }
    }

    cout << "Decrypted Message: " << mess << endl;
}