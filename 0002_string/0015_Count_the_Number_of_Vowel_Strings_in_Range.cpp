class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int ans=0;
    
        for(int i=left;i<=right;i++){
           string c=words[i];
           int si=words[i].size();
           
           if((c[0]=='a' || c[0]=='e' || c[0]=='i' || c[0]=='o' || c[0]=='u')&& (c[si-1]=='a' || c[si-1]=='e' || c[si-1]=='i' || c[si-1]=='o' || c[si-1]=='u')){
          ans++;
           }
        }
        return ans;
    }
};