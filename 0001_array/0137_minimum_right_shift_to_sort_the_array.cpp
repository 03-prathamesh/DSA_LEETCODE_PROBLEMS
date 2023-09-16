class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        
       

        for(int i=0;i<nums.size();i++){
             vector<int>temp(nums.size());
            for(int j=0;j<nums.size();j++){
                temp[(j+i)%nums.size()]=nums[j];
            }
            
            int first=temp[0];
            bool isSorted=true;
            for(int p=1;p<temp.size();p++){
                if(temp[p]<first){
                   isSorted=false;
                    
                }
                else{
                    first=temp[p];
                }
            }
            
            if(isSorted){
                return i;
            }
            else{
               temp.clear();
            }
        }
        return -1;
        
    }
};