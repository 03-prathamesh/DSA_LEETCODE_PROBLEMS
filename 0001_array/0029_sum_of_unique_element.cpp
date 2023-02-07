class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
  vector<int>unique_ele;

   for(int i=0;i<nums.size();i++){

       int count=0;

       for(int j=0;j<nums.size();j++){

            if(nums[i]==nums[j]){

                count++;
            }
       }

       if(count==1){

           unique_ele.push_back(nums[i]);
       }
   }


   

   int sum=0;
   for(int i=0;i<unique_ele.size();i++){

       sum=sum+unique_ele[i];
   }

return sum;
    }
};

// efficient solution
// TC: O(n)
// SC: O(1)
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        for(auto x: nums)
        {
            if(count(nums.begin(), nums.end(), x)==1)
               sum+=x;
        }
        return sum;
    }
};