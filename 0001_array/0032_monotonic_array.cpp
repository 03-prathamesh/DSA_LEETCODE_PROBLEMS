class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

 int n=nums.size();

 int count=0;
 int c=0;
 int small=nums[0];
 int large=nums[0];       
 
 for(int i=1;i<nums.size();i++){


   if(small<=nums[i]){

       count++;
       small=nums[i];
   }


   if(large>=nums[i]){

       c++;
       large=nums[i];
   }

 }



 if(count>=(n-1)){

     return true;
 }
 else if(c>=(n-1)){

     return true;
 }
 else{
     return false;
 }

    }
};