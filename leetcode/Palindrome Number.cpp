class Solution {
public:
    bool isPalindrome(int x) {
       
    string strX = to_string(x);
    string temp = strX;
    reverse(temp.begin(), temp.end());
    return strX == temp;
}
    
};
