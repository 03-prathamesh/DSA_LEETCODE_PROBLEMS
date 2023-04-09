class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        int i;
        for( i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                len++;
            }

            if(len>=1 && s[i]==' '){
                break;
            }   
        }
        return len;
    }
};