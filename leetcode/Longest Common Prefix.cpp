class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      
    if (!strs.size())
        return "";
    string str = strs[0];
    int end = str.length();
    for (int i = 1; i < strs.size(); i++)
    {
        int start = 0;
        while (start < end)
        {
            if (str[start] == strs[i][start])
            {
                start++;
            }
            else
            {
                end = start;
            }
        }
    }
    return str.substr(0, end);   
    }
};
