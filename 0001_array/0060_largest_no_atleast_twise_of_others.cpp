class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
int number;
   for(int i=0;i<nums.size();i++){

        int count=0;
        for(int j=0;j<nums.size();j++){

                if(nums[j]*2<=nums[i] && i!=j){

                    count++;
                }

        }

        if(count>=nums.size()-1){

       return i;
         }
   }

   return -1;

    }
};