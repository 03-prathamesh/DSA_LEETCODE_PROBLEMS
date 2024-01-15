class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int greater=0;
        for(auto x:mp){
            if(x.second>greater){
                greater=x.second;
            }
        }
        int ans=0;
        for(auto x:nums){
            if(mp[x]==greater){
                // ans.push_back(x.first);
                ans++;
            }
        }
        return ans;
    }
};