class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int sum=0;
        ans.push_back(nums[0]); 
        sum=nums[0];
           for(int j=1;j<nums.size();j++){
              sum=sum+(nums[j]);
              ans.push_back(sum);
           }
       return ans;
    }
};