#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
string deleteVowels(string str);
int main()
{

    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    str = deleteVowels(str);
    cout << ".";
    for (int i = 0; i < str.length() - 1; i++)
    {
        cout << str[i] << ".";
    }
    cout << str[str.length() - 1] << endl;
    return 0;
}

string deleteVowels(string str)
{
    string str1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != 'a' && str[i] != 'A' && str[i] != 'e' && str[i] != 'E' && str[i] != 'o' && str[i] != 'O' && str[i] != 'I' && str[i] != 'i' && str[i] != 'u' && str[i] != 'U' && str[i] != 'y' && str[i] != 'Y')
        {
            str1 += str[i];
        }
    }
    //  cout << str1 << endl;
    return str1;
}
