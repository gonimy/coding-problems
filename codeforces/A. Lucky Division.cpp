#include <iostream>
using namespace std;
bool checkLucky(int n);
int main()
{
    int n;
    cin >> n;
    (checkLucky(n)) ? cout << "YES" : cout << "NO" << endl;
    return 0;
}

bool checkLucky(int n)
{
    bool flag = false;
    int arr[12] = {4, 7, 47, 74, 44, 444, 447, 474, 477, 777, 774, 744};
    for (int i = 0; i < 12; i++)
    {
        if (n % arr[i] == 0)
            flag = true;
    }
    return flag;
}
