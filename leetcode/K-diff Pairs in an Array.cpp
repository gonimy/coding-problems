class Solution {
public:



int findPairs(vector<int> &v, int k)
{
    sort(v.begin(), v.end());
    int i = 0, j = i + 1, cnt = 0;
    while (i < v.size() && j < v.size())
    {
        if (i == j)
        {
            j++;
            continue;
        }
        if (i > 0 && v[i] == v[i - 1])
        {
            i++;
            continue;
        }
        auto diff = std::abs(v[i] - v[j]);
        if (diff == k)
        {
            i++;
            j++;
            cnt++;
        }
        else if (diff < k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return cnt;
}

};
