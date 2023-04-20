class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;
        vector<string>final;
        string ans;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=' '){
                ans.push_back(s1[i]);
            }

            if(s1[i]==' ' || i==s1.size()-1){
                mp[ans]++;
                ans="";
            }
        }

        for(int i=0;i<s2.size();i++){
            if(s2[i]!=' '){
                ans.push_back(s2[i]);
            }

            if(s2[i]==' ' || i==s2.size()-1){
                mp[ans]++;
                ans="";
            }
        }

        for(auto x:mp){
            if(x.second==1){
                final.push_back(x.first);
            }
        }
        return final;
    }
};