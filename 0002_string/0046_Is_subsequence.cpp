class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ans=0;
        int j=0;
        for(int i=0;i<t.size();i++){
           if(t[i]==s[j]){
               ans++;
               j++;
           } 
        }
        if(ans==s.size()){
            return true;
        }
        return false;
    }
};