class Solution {
public:
    bool rotateString(string A, string B) {
     
        if(A=="" &&B=="")
            return true;
        for(int i=0;i<A.length();i++){
            char a=A[0];
            A.erase(0, 1);
            A=A+a;
            if(A==B)
                return true;
        }
        return false;
        
    }
};
