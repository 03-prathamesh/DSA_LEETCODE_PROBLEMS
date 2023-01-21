class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int>less_pivot;
        vector<int>greater_pivot;
        vector<int>equal;
        vector<int>ans;

        for(int i=0;i<nums.size();i++){

               if(nums[i]>pivot){

                    greater_pivot.push_back(nums[i]);
               }
               else if(nums[i]==pivot){


                    equal.push_back(nums[i]);

               }
               else{

                   less_pivot.push_back(nums[i]);
               }
        }


        for(int i=0;i<less_pivot.size();i++){


              ans.push_back(less_pivot[i]);
        }
     
        for(int i=0;i<equal.size();i++){

             ans.push_back(equal[i]);
        }
        for(int i=0;i<greater_pivot.size();i++){

            ans.push_back(greater_pivot[i]);
        }

        return ans;

    }
      
};