class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        

          vector<int>ans;  
          vector<int>ans1;  
          vector<int>final;       
          int count=n;


          for(int i=0;i<n;i++){

               ans.push_back(nums[i]);

          }

          for(int i=n;i<nums.size();i++){

               ans1.push_back(nums[i]);

          }


          for(int i=0;i<n;i++){

               final.push_back(ans[i]);
               final.push_back(ans1[i]);
          }


          return final;
         
    }
};