class Solution {
public:
    int appendCharacters(string s, string t) {
      
        // int count=0;
        // for(int i=0;i<t.size();i++){
        //     if(s.find(t[i])==string::npos){
        //         return t.size()-i;
        //     }
        // }
        // return 0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==t[ans]){
                ans++;
            }
        }
        return t.size()-ans;
    }
};