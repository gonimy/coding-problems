class Solution {
public:

int val(char curr, char prev)
{
    switch (curr)
    {
    case 'I':
        return 1;
    case 'V':
        if (prev == 'I')
            return 3;
        return 5;
    case 'X':
        if (prev == 'I')
            return 8;
        return 10;
    case 'L':
        if (prev == 'X')
            return 30;
        return 50;
    case 'C':
        if (prev == 'X')
            return 80;
        return 100;
    case 'D':
        if (prev == 'C')
            return 300;
        return 500;
    case 'M':
        if (prev == 'C')
            return 800;
        return 1000;
    }
    return 0;
}
    int romanToInt(string s)
{
    char prev = 'a';
    int tot = 0;
    for (int i = 0; i < s.length(); i++)
    {
        tot += val(s[i], prev);
        prev = s[i];
    }
    return tot;
}

};
