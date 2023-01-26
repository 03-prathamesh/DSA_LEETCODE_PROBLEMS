class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int eleSum=0;

      for(int i=0;i<nums.size();i++){


        eleSum+=nums[i];
      }
        int digitSum=0;
     for(int i=0;i<nums.size();i++){
         while(nums[i]>0){
             digitSum+=(nums[i]%10);
             nums[i]/=10;
         }
          
      }
        return abs(eleSum-digitSum);
 
        

    }
};