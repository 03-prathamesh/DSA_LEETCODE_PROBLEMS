class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        // int maxi=1;
        // int c=0;
        // for(int i=0;i<nums.size();i++){
        //     int count=1;
        //     int temp=nums[i];
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[j]>temp){
        //            count++;
        //             maxi=max(maxi,count);
        //            temp=nums[j];
        //         }
        //         else{
                   
        //             break;
                   
        //         }
        //     }
           
        // }
        // maxi=max(maxi,c);
        // return maxi;
        int max_len=1;
        int temp=nums[0];
        int len=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>temp){
                len++;
                temp=nums[i];
            }
            else{
                max_len=max(max_len,len);
                len=1;
                temp=nums[i];
            }


           

        }
       if(len>max_len){
           max_len=len;
       }
        return max_len;
    }
};