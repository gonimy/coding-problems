class Solution {
public:
int countPrimes(int n)
{
    vector<bool> check(n + 1, true);
    check[0] = false;
    check[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (check[i] == false)
            continue;
        for (int j = i * i; j <= n; j += i)
        {
            check[j] = false;
        }
    }
    int cnt = 0;
    for (int i = 1; i < n; i++)
        if (check[i])
            cnt++;

    return cnt;
}
};
