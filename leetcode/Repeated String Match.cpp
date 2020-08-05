class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string aa = a;
    for (int cnt = 1; cnt <= b.length() / a.length() + 2; cnt++, aa += a)
        if (aa.find(b) != string::npos)
            return cnt;
    return -1;
    }
};
