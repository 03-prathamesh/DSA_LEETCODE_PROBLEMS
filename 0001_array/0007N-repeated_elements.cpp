class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        
        
        int prev_ele=nums[0];
        int count=1;
        
        
        
        
        int n=nums.size();
        for(int i=1;i<n;i++){
            
            
            if(nums[i]!=prev_ele){
                
                
                 prev_ele=nums[i];
                
                
            }
            else{
                
                
                return nums[i];
            }
            
                 
            
        }
        
        
        return 0;
    }
};