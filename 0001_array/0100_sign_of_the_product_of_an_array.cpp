class Solution {
public:
    int arraySign(vector<int>& nums) {
        int  sum=1; //unsigned int give you the out 38729297819 something like this. long long gives the proper values
        for(int i=0;i<nums.size();i++){
               if(nums[i]<0){
                  sum=sum*-1;
              }
              else if(nums[i]>0){
                  sum=sum*1;
              }else{
                  return 0;
              }          
        }

        if(sum<0){
            return -1;
        }
        else if(sum>0){
            return 1;
        }
           
       return 0;
    }
};