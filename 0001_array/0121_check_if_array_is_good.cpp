class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int max_ele=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max_ele){
                max_ele=nums[i];
            }
        }
        if(max_ele>nums.size()){
            return false;
        }
        else if(max_ele==mp.size()){
            if(mp.size()==max_ele && mp[nums.size()-1]==2){
                return true;
            }
        }
        return false;
    }
};