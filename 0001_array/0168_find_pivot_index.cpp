class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        // if(nums.size()==1){  TC-O(n*2)
        //    return 0;
        // }
       
        // for(int i=0;i<nums.size();i++){
        //      int left_sum=0;
        //      int right_sum=0;
             
        //     for(int j=i+1;j<nums.size();j++){
        //         right_sum=right_sum+nums[j];
        //     }
        //     for(int p=0;p<i;p++){
        //         left_sum=left_sum+nums[p];
        //     }

        //     if(left_sum==right_sum){
        //         return i;
        //     }

        // }
        int total_sum=0;
        int left_sum=0;
        for(int i=0;i<nums.size();i++){
            total_sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(left_sum==total_sum-left_sum-nums[i]){
                return i;
            }

            left_sum+=nums[i];
        }
        return -1;
    }
};