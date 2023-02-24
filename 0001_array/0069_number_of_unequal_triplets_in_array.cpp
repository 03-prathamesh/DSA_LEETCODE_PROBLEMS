class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        
   

        int count=0;

        for(int i=0;i<nums.size();i++){

            for(int j=i+1;j<nums.size();j++){

                   if(nums[i]!=nums[j] && i<j){

                        for(int k=j+1;k<nums.size();k++){

                            if(nums[j]!=nums[k] && nums[i]!=nums[k] && (j<k && i<k && i<j)){

                                count++;
                                
                            }
                        }
                   }
            }
        }

        return count;
    }
};