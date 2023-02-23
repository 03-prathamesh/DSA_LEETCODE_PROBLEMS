class Solution {
public:
    int countElements(vector<int>& nums) {



 int m=*max_element(nums.begin(),nums.end());
 int n=*min_element(nums.begin(),nums.end());


 int count=0;
   for(int i=0;i<nums.size();i++){

        if(nums[i]>m && nums[i]<n || nums[i]<m && nums[i]>n){

            count++;
        }
   }

 return count;

    }
};