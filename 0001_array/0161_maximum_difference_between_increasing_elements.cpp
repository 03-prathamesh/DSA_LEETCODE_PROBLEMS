class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int prev=nums[0];
        int greater=0;
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(prev<nums[i]){
                count=(nums[i]-prev);
                greater=max(greater,count);
                // prev=nums[i];
            }
            else{
                // greater=max(greater,count);
                count=0;
                prev=nums[i];
                
            }
        } 
        if(greater==0){
            return -1;
        }
        return greater;
        
    }
};