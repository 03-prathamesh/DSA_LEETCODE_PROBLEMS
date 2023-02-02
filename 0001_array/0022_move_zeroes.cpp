class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        

    int n=nums.size();
    int i=0;
    int j=0;


      for(int i=0;i<nums.size();i++){


        if(nums[i]!=0){

             nums[j]=nums[i];
             j++;

        }

      }

      for(int p=j;p<nums.size();p++){

           nums[p]=0;
      }

    }
};