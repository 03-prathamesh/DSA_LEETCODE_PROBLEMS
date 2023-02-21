// tc=O(1).---->XOR Operation........

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
int unique=0;
  for(int i=0;i<nums.size();i++){

 unique=unique^nums[i];

  }

 return unique;
    }
};