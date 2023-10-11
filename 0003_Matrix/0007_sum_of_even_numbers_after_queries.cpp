class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        int even_sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even_sum=even_sum+nums[i];
            }
        }

        for(int i=0;i<queries.size();i++){
            int val=queries[i][0];
            int ind=queries[i][1];
            if(nums[ind]%2==0){
                even_sum=even_sum-nums[ind];
            }
            nums[ind]=nums[ind]+val;
            if(nums[ind]%2==0){
                even_sum=even_sum+nums[ind];
            }
            ans.push_back(even_sum);
        }
        return ans;
    }
};