class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        
        
       int boundry_pos=0;
       int pos=0;
       for(int i=0;i<nums.size();i++){
          
               pos=pos+nums[i];
           
           if(pos==0){
               boundry_pos++;
           }
               
    
       }
        return boundry_pos;
        
    }
};