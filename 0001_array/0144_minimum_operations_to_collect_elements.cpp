class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int>s1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<=k){
                s1.insert(nums[i]);

            }
            if(s1.size()==k){
                return nums.size()-i;
            }
            
        }
        return nums.size()-1;

    }
};