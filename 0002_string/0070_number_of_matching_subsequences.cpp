class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string,int>mp;
       int ans=0;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        for(auto x:mp){
           string temp=x.first;
           int count=x.second;
           int k=0;
            for(int i=0;i<s.size();i++){
               if(s[i]==temp[k]){
                   k++;
               }

               if(k==temp.size()){
                   ans=ans+x.second;
                   break;
               }
            }
        }
        return ans;
    }
};