class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
           string arr[27] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        string str;
        set<string>s;
        for(auto word:words){
            for(int i=0;i<word.length();i++){
                str+=arr[word[i]-'a'];
            }
            s.insert(str);
            str="";
        }
    return s.size();
    }
};
