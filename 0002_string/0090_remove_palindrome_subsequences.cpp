class Solution {
public:
    int removePalindromeSub(string s) {
        
        int start=0;
        bool flag=flag;
        int end=s.size()-1;
        while(start<=end){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else{
                flag=true;
                break;
            }
        }
        if(flag!=true){
            return 1;

        }
        return 2;
     
    }
};