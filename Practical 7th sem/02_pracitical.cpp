// Practical 2  
// AIM: - Implement Monoalphabetic cipher encryption


#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, j;
    char text[200];

    char plain[26] =
    {'a','b','c','d','e','f','g','h','i','j','k','l','m',
     'n','o','p','q','r','s','t','u','v','w','x','y','z'};

    char key[26] =
    {'z','x','c','v','b','n','m','l','k','j','h','g','f',
     'd','s','a','q','w','e','r','t','y','u','i','o','p'};

    cout << "Enter the Message: ";
    cin >> text;

    // Encryption
    for(i = 0; i < strlen(text); i++)
    {
        for(j = 0; j < 26; j++)
        {
            if(text[i] == plain[j])
            {
                text[i] = key[j];
                break;
            }
        }
    }

    cout << "\nEncrypted Message: " << text << endl;

    // Decryption
    for(i = 0; i < strlen(text); i++)
    {
        for(j = 0; j < 26; j++)
        {
            if(text[i] == key[j])
            {
                text[i] = plain[j];
                break;
            }
        }
    }

    cout << "Decrypted Message: " << text << endl;

    return 0;
}