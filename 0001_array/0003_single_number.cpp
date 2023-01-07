class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=nums[0];

        for(int i=1; i<nums.size(); i++)
            res=res^nums[i];

        return res;
    }
};


//brut force approach

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count=1;
        for(int i=0; i<nums.size(); i++)
        {
            count=0;
            for(int j=0; j<nums.size(); j++)
            {
                if(nums[i]==nums[j])
                    count++;
            }
            if(count==1)
                return nums[i];
        }
        return 0;
    }
};