class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int maxi=0;
        long long sum=0;
        int ans2=0;
        vector<long long>final;
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            sum=sum+nums[i]+maxi;
            final.push_back(sum);
        }
        return final;
        
    }
};