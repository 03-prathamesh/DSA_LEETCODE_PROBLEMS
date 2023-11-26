class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>mp;
       vector<vector<string>>ans;
       for(int i=0;i<strs.size();i++){
           string sorted_string=strs[i];
           sort(sorted_string.begin(),sorted_string.end());
           mp[sorted_string].push_back(strs[i]);

       }
       for(auto x:mp){
           ans.push_back(x.second);

       }
       
       return ans;
       

    }
};