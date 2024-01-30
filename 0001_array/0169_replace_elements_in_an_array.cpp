class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }

        for(int i=0;i<operations.size();i++){
            int nums_pos=mp[operations[i][0]];
            nums[nums_pos]=operations[i][1];
            mp[operations[i][1]]=nums_pos;
        }
        return nums;
    }
};