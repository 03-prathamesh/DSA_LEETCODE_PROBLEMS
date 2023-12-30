class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp2;
        for(auto x:nums){
            mp[x]++;
        }
        int greater_occurence=0;
        int greater_element=0;
        for(auto x:mp){
            if(x.second>greater_occurence){
                greater_occurence=x.second;
                greater_element=x.first;
            }
        }
        for(int i=0;i<nums.size();i++){
            mp2[nums[i]]++;
            mp[nums[i]]--;
            if(mp2[greater_element]*2>i+1 && mp[greater_element]*2>nums.size()-1-i){
                return i;
            }
        }
        return -1;
    }
};