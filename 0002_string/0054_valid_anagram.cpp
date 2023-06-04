class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s.size()!=t.size()){
            return false;
        }

        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};
// optimised solution
unordered_map<char,int>s1;
        unordered_map<char,int>t1;
        for(auto x:s){
            s1[x]++;
        }

         for(auto x:t){
            t1[x]++;
        }

        if(s1.size()!=t1.size()){
            return false;
        }

        return s1==t1;
