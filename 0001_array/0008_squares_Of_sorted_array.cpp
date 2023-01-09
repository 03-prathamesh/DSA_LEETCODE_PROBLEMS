class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        
       vector<int>vec;
       
        
        for(int i=0;i<nums.size();i++){
            
            
             int var=0;
           var=nums[i]*nums[i];
            vec.push_back(var);
               
        }
        
        sort(vec.begin(),vec.end());
        return vec;
        
    }
};