class Solution {
public:

    int firstOccurence(vector<int>nums, int target){

        int start=0;
        int end=nums.size()-1;

        int mid=start+(end-start)/2;
        int ans=-1;

        while(start<=end){
            if(nums[mid]==target){

                ans=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
            
        }
        return ans;

    }

    int lastOccurence(vector<int>nums,int target){

         int start=0;
        int end=nums.size()-1;

        int mid=start+(end-start)/2;
        int ans1=-1;

        while(start<=end){
            if(nums[mid]==target){

                ans1=mid;
                start=mid+1;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans1;
    }


    vector<int> searchRange(vector<int>& nums, int target) {

      
        
        int ans1=firstOccurence(nums,target);
        int ans2=lastOccurence(nums,target);
        
        return {ans1,ans2};
    }
};