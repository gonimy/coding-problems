#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int cnt = 1;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            cnt++;
            if (cnt == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            cnt = 1;
        }
    }
    cout << "NO" << endl;
    return 0;
}
