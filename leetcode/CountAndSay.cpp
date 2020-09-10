class Solution {
public:
    string countAndSay(int n) {
        string str="1";
        while(--n){
            str=count(str);
        }
        return str;
    }
    string count (string str){
        string res="";
     int cnt=1;
        for(int i=1,j=0;i<=str.length();i++){
        if(i<str.length()&&str[i]==str[j]){
            cnt++;
        }else{
            res+=to_string(cnt)+str[j];
            j=i;
            cnt=1;
        }
    }
        return res;
}

};
