class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int count=0;
       
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
               int tp=abs(nums[i-1]-nums[i]);
               count=count+(tp+1);
               nums[i]=nums[i]+(tp+1);
            }
           
        }
        return count;
    }
};