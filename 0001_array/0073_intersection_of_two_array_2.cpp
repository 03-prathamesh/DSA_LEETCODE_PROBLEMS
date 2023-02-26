class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
vector<int>final;
int c_num1=nums1.size();
int c_num2=nums2.size();
int count=0;


sort(nums1.begin(),nums1.end());
sort(nums2.begin(),nums2.end());

int i=0,j=0;

 while(i<c_num1 && j<c_num2){


     if(nums1[i]<nums2[j]){

         i++;
     }
     else if(nums1[i]>nums2[j]){

         j++;
     }
     else{

         final.push_back(nums1[i]);
         i++;
         j++;
     }


 }

 return final;
   
    }
};