#include <iostream>
#include <string>
using namespace std;

bool checkWord(string str)
{
    string word = "hello";
    int cnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == word[cnt])
        {
            cnt++;
        }
    }
    return (cnt == 5) ? true : false;
}

int main()
{

    string str;
    cin >> str;
    (checkWord(str)) ? cout << "YES" : cout << "NO";
    return 0;
}
