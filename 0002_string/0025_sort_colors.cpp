class Solution {
public:
    void sortColors(vector<int>& nums) {
        int idx=0;
        vector<int>temp(nums.begin(),nums.end());
        for(int i=0;i<temp.size();i++){
            if(temp[i]==0){
                nums[idx]=0;
                idx++;
            }
        }
        for(int j=0;j<temp.size();j++){
            if(temp[j]==1){
                nums[idx]=1;
                idx++;
            }
        }
        for(int k=0;k<temp.size();k++){
            if(temp[k]==2){
                nums[idx]=2;
                idx++;
            }
        }
        
    }
};