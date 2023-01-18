class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {


 int n=nums.size();
  vector<int>v1(n,0);

  int positive=0;
  int  negative=1;

   for(int i=0;i<n;i++){

      if(nums[i]>0){

           
          v1[positive]=nums[i];
            positive=positive+2;
      }
      else{


        v1[negative]=nums[i];
           negative=negative+2;
      }
   }

   return v1;

    }
};