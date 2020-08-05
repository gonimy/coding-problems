class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int cnt=0;
        int lines=0;
        for(char c:S){
            cnt+=widths[c-'a'];
            if(cnt>100){
                lines++;
                cnt=widths[c-'a'];
            }
        }
    return {++lines,cnt};
    }
};
