class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> ans;
        int minElement=INT_MAX;
        int finalElement;
        int count=0;
        int maxCount=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]%2==0){
                count=0;
                for(int j=0;j<nums.size();j++){
                    if(nums[i]==nums[j]) count++;
                }
                if(maxCount<count){
                    maxCount=count;
                    minElement=nums[i];
                }
                else if(maxCount==count){
                    minElement=min(minElement, nums[i]);
                }
                
            }           

        }
        if(minElement==INT_MAX) minElement=-1;
        return minElement;
        // sort(ans.begin(),ans.end());


    }
};