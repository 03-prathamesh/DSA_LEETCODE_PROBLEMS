class Solution {
public:
    int pivotElement(vector<int>&arr){

        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(arr[mid]<arr[0]){
                e=mid;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }

    int binary_search(vector<int>&arr, int s , int e , int key){
         int start=s;
         int end=e;

         int mid=start+(end-start)/2;

         while(start<=end){

             if(arr[mid]==key){
                 return mid;
             }

             if(arr[mid]>key){
                 end=mid-1;
             }
             else{
                 start=mid+1;
             }
             mid=start+(end-start)/2;
         }
         return -1;
    }

    int search(vector<int>& nums, int target) {
        
        int pvt=pivotElement(nums);
        if(target>=nums[pvt] && target<=nums[nums.size()-1]){
            return binary_search(nums,pvt,nums.size()-1,target);
       
        }
        else{
            return binary_search(nums,0,pvt-1,target);
          
        }

       
    }
};