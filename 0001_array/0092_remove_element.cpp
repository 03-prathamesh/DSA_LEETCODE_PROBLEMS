class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>s1(nums.begin(),nums.end());
        nums.clear();
        int j=0;
        for(auto x:s1){
            if(x!=val){
                nums.push_back(x);
                //nums[j]=x; this is not storing the values in nums . dont know why
            }
        }
        
       return nums.size();
    }
};