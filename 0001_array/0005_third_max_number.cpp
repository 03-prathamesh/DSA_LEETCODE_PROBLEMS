class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        
       
      sort(nums.begin(), nums.end(), greater <>());
        
        
       int prev_ele=nums[0];
        int count=1;
        
        for(int i=1;i<nums.size();i++){
            
            
            
            if(nums[i]!=prev_ele){
                
                
                 count++;
                
                prev_ele=nums[i];
            }
            
            
            if(count==3){
                
                return prev_ele;
            }
      
        }
        
        
        return nums[0];
     
    
   }   

};