class Solution {
public:
    int countKeyChanges(string s) {
        
        
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=tolower(s[i]);
            }
        }
        int prev=s[0];
        int count=0;
        for(int i=1;i<s.size();i++){
            if(s[i]!=prev){
                count++;
                prev=s[i];
            }
        }
        return count;
    }
};