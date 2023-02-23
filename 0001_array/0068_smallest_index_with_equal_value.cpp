class Solution {
public:
    int smallestEqual(vector<int>& nums) {
   vector<int>ans;
   int count=0;    
   for(int i=0;i<nums.size();i++){
          if(i%10==nums[i]){
              ans.push_back(i);
              count++;
             }
        }

//  int n=*min_element(ans.begin(),ans.end()); this will give the error if no element will present in this ans vector
        if(count>0){
            int n=*min_element(ans.begin(),ans.end());
            return n;
        }
        return -1;
    }
};