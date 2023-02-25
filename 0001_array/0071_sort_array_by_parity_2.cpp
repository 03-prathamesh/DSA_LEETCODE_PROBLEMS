class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        

 vector<int>ans1;
 vector<int>ans2;
 vector<int>final;


  for(int i=0;i<nums.size();i++){

    
   if(nums[i]%2==0){

       ans1.push_back(nums[i]);
   }
   else{
       ans2.push_back(nums[i]);
   }


  }


  for(int i=0;i<ans1.size();i++)
{

     final.push_back(ans1[i]);
     final.push_back(ans2[i]);



}

    return final;
    }
};