class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string ans="";
        int count=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
               ans+=s[i];
            }
            else{
                ans=ans+s[i];
                // ans=ans+" ";
                count++;
               
            }

            if(s[i]==' ' && count==k){
                ans.pop_back();
                break;
            }
        }
        
        return ans;
    }
};