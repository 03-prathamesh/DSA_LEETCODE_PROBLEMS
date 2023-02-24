class Solution {
public:
    int minPairSum(vector<int>& nums) {

 vector<int>ans;   
 int maximum;
 int n=nums.size();


 sort(nums.begin(),nums.end());

 int start=0;
 int end=n-1;vs

   while(end>start){

        int add =nums[start]+nums[end];
        ans.push_back(add);


        start++;
        end--;
   }

  maximum=*max_element(ans.begin(),ans.end());

  return maximum;

    }
};