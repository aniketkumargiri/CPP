#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character ";
    cin >> ch;
    /*
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "Vowel\n";
    }
    else
    {
        cout << "Consonant\n";
    }*/
    switch (ch)
    {
    case 'a':
        cout << "Vowel\n";
        break;
    case 'e':
        cout << "Vowel\n";
        break;
    case 'i':
        cout << "Vowel\n";
        break;
    case 'o':
        cout << "Vowel\n";
        break;
    case 'u':
        cout << "Vowel\n";
        break;
    case 'A':
        cout << "Vowel\n";
        break;
    case 'E':
        cout << "Vowel\n";
        break;
    case 'I':
        cout << "Vowel\n";
        break;
    case 'O':
        cout << "Vowel\n";
        break;
    case 'U':
        cout << "Vowel\n";
        break;

    default:
        cout << "Consonant\n";
        break;
    }

    return 0;
}