#include <iostream>
using namespace std;
int main()
{

    int a, b;
    int cnt = 0;
    cin >> a >> b;

    while (a <= b)
    {
        cnt++;
        a *= 3;
        b *= 2;
    }
    cout << cnt << endl;



    return 0;
}
