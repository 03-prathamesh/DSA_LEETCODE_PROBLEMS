class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans1=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int ans2=nums[0]*nums[1]*nums[nums.size()-1];

        int final=max(ans1,ans2);
        return final;
    }
};