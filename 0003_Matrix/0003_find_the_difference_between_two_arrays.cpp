class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
         vector<int>v1;
         vector<int>v2;
         for(int i=0;i<nums1.size();i++){
             bool found=false;
             for(int j=0;j<nums2.size();j++){
                 if(nums2[j]==nums1[i]){
                     found=true;
                 }
             }
             if(found==false){
                 v1.push_back(nums1[i]);
             }
         }

         for(int i=0;i<nums2.size();i++){
             bool found=false;
             for(int j=0;j<nums1.size();j++){
                 if(nums1[j]==nums2[i]){
                     found=true;
                 }
             }
             if(found==false){
                 v2.push_back(nums2[i]);
             }
         }
         set<int>s1(v1.begin(),v1.end());
         set<int>s2(v2.begin(),v2.end());

         vector<int>ans1(s1.begin(),s1.end());
         vector<int>ans2(s2.begin(),s2.end());
    

        return {ans1,ans2};

    }
};