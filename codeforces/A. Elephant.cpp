#include <iostream>
using namespace std;
int main()
{

    int num;
    cin >> num;
    int cnt = 0;
    while (num)
    {
        if (num >= 5)
        {
            num -= 5;
            cnt++;
        }
        else if (num >= 4)
        {
            num -= 4;
            cnt++;
        }
        else if (num >= 3)
        {
            num -= 3;
            cnt++;
        }
        else if (num >= 2)
        {
            num -= 2;
            cnt++;
        }
        else
        {
            num--;
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
