class Solution {
public:
    bool divideArray(vector<int>& nums) {


       int n=(nums.size()/2);
sort(nums.begin(),nums.end());

int count=0;
       for( int i=1;i<nums.size();i=i+2){

                 if(nums[i]==nums[i-1]){

                     count++;
                 }
           }


   
    
    if(count==n){

        return true;
    }
    else{

        return false;
    }

    }
};