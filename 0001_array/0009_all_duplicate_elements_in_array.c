class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        
        vector<int>v1;

        sort(nums.begin(),nums.end());
      
        
       
        int prev_ele=nums[0];

        for(int i=1;i<nums.size();i++){

            int count=0;
            if(nums[i]!=prev_ele){

                 count++;
                 prev_ele=nums[i];
            }
            else{

                 v1.push_back(nums[i]);
            }
        }  
        
        return v1;
    }

   
};