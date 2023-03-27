class Solution {
public:
    bool areOccurrencesEqual(string s) {
        set<char>s1(s.begin(),s.end());//string data types will give you error here
        int occu=0;
        vector<int>ans;
        
        for(auto x:s1){
           int cou=count(s.begin(),s.end(),x);
            ans.push_back(cou);
        }
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]!=ans[i+1])
            return false;
        }
        return true;
    }
};