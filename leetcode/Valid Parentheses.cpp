class Solution {
public:
    bool isValid(string str) {
        
     
	  stack<char>ss;
        for(char c : str){
            if(c == '(' || c == '[' || c == '{'){
                ss.push(c);
            }
            else{
                if(ss.empty()) return false;
                else if(c == ')' && ss.top() == '(')        ss.pop();
                else if(c == ']' && ss.top() == '[')        ss.pop();
                else if(c == '}' && ss.top() == '{')        ss.pop();
                else ss.push(c);          
            }
        }
        return ss.size()==0;}
    
};
