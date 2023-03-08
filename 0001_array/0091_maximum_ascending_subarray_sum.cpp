class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {   
        int prev_ele=nums[0];
        int final_sum=nums[0];
        int ans=0;  
        for(int i=1;i<nums.size();i++){
            if(nums[i]>prev_ele){
                prev_ele=nums[i];
                final_sum=final_sum+nums[i];
            }
            else{
                 prev_ele=nums[i];
                 if(ans<final_sum){
                     ans=final_sum;
                 }
                 final_sum=nums[i]; 
            }
        }
        if(ans<final_sum){
            ans=final_sum;
        }
        return ans;
    }
};