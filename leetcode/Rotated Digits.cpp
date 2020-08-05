class Solution {
public:
   
bool isGood(int x)
{
    bool rotated = false;
    while (x > 0)
    {
        int y = x % 10;
        switch (y)
        {
        case 0:
        case 1:
        case 8:
            break;
        case 2:
        case 5:
        case 6:
        case 9:
            rotated = true;
                break;
        default:
            return false;
        }
        x = x / 10;
    }
    return rotated;
}

int rotatedDigits(int N)
{
    int cnt = 0;
    for (int i = 0; i <= N; i++)
    {
        if (isGood(i))
            cnt++;
    }
    return cnt;
}
};
