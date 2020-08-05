class Solution {
public:
    string convertToTitle(int n) {
    string str;
    char c;
    while (n)
    {
        n -= 1;
        c = 'A' + n % 26;
        str = c + str;
        n /= 26;
    }
    return str;
    }
};
