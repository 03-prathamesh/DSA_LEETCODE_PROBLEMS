class Solution {
public:
    int minSteps(string s, string t) {
        int count=0;
        set<int>s1(s.begin(),s.end());
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(auto x:s){
            mp1[x]++;
        }
        for(auto x:t){
            mp2[x]++;
        }

        for(int i=0;i<s.size();i++){
            if(mp2[s[i]]<mp1[s[i]]){
            
               count=count+(mp1[s[i]]-mp2[s[i]]);
                  mp2[s[i]]=mp1[s[i]];
            }
            else if(mp2[s[i]]>mp1[s[i]]){
                mp2[s[i]]=mp1[s[i]];
            }
        }
        return count;
    }
};