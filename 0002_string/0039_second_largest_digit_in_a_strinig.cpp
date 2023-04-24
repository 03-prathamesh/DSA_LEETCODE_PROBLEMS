class Solution {
public:
    int secondHighest(string s) {
        int ans=0;

        set<int>s1;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                int num=s[i]-'0';
                s1.insert(num);
            } 
        }

        if(s1.size()<=1){
            return -1;
        }
        vector<int>final;
        for(auto x:s1){
            final.push_back(x);
        }
        return final[final.size()-2];
    }
};