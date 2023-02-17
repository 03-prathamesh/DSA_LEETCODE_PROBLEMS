class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        

    sort(nums.begin(),nums.end());

 int n=nums.size();
  int fa=nums[n-1];
  int fb=nums[n-2];

  int sa=nums[0];
  int sb=nums[1];



 int final=(fa*fb)-(sa*sb);

  return final;


    }
};