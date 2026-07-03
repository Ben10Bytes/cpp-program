

//      <<    PRACTICAL 3     >>

// Aim :- To implement Playfair Cipher Encryption using C++.



#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to generate Playfair matrix
void generateMatrix(string key, char matrix[5][5])
{
    bool used[26] = {false};

    // Merge I and J
    used['j' - 'a'] = true;

    string temp = "";

    for(char ch : key)
    {
        if(ch >= 'A' && ch <= 'Z')
            ch += 32;

        if(ch == 'j')
            ch = 'i';

        if(!used[ch - 'a'])
        {
            temp += ch;
            used[ch - 'a'] = true;
        }
    }

    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        if(!used[ch - 'a'])
        {
            temp += ch;
            used[ch - 'a'] = true;
        }
    }

    int k = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            matrix[i][j] = temp[k++];
        }
    }
}

// Find character position
void findPosition(char matrix[5][5], char ch, int &row, int &col)
{
    if(ch == 'j')
        ch = 'i';

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(matrix[i][j] == ch)
            {
                row = i;
                col = j;
                return;
            }
        }
    }
}

int main()
{
    string key, text;

    cout << "Enter Key : ";
    cin >> key;

    cout << "Enter Plain Text : ";
    cin >> text;

    for(char &c : text)
    {
        if(c >= 'A' && c <= 'Z')
            c += 32;
    }

    char matrix[5][5];

    generateMatrix(key, matrix);

    cout << "\nPlayfair Matrix:\n";

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Prepare plaintext
    string prepared = "";

    for(int i = 0; i < text.length(); i++)
    {
        prepared += text[i];

        if(i + 1 < text.length() && text[i] == text[i + 1])
            prepared += 'x';
    }

    if(prepared.length() % 2 != 0)
        prepared += 'x';

    string cipher = "";

    for(int i = 0; i < prepared.length(); i += 2)
    {
        char a = prepared[i];
        char b = prepared[i + 1];

        int r1, c1, r2, c2;

        findPosition(matrix, a, r1, c1);
        findPosition(matrix, b, r2, c2);

        if(r1 == r2)
        {
            cipher += matrix[r1][(c1 + 1) % 5];
            cipher += matrix[r2][(c2 + 1) % 5];
        }
        else if(c1 == c2)
        {
            cipher += matrix[(r1 + 1) % 5][c1];
            cipher += matrix[(r2 + 1) % 5][c2];
        }
        else
        {
            cipher += matrix[r1][c2];
            cipher += matrix[r2][c1];
        }
    }

    cout << "\nEncrypted Text : " << cipher << endl;

    return 0;
}