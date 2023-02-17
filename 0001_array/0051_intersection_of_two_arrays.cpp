class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
   
vector<int>ans;
set<int>s1;

  for(int i=0;i<nums1.size();i++){

           for(int j=0;j<nums2.size();j++){

             if(nums1[i]==nums2[j]){

                 s1.insert(nums1[i]);
                 

        }

           }

  }

 for(auto it:s1){

  ans.push_back(it);
 }

 nums1=ans;


return ans;
    }
};