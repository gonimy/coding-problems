#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[5][5];
    int tmpI = 0, tmpJ = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                tmpI = i + 1;
                tmpJ = j + 1;
            }
        }
    }
    int res = abs(3 - tmpJ) + abs(3 - tmpI);
    cout << res << endl;
}
