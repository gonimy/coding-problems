#include <iostream>
using namespace std;
int main()
{

    int x, t;
    string str;
    cin >> x >> t >> str;
    while (t--)
    {
        for (int i = 0; i < x - 1; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                str[i] = 'G';
                str[i + 1] = 'B';
                i++;
}
        }
    }
    cout << str << endl;
    return 0;
}
