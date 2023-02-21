class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
// int majo_ele=0;
// int n=nums.size()/2;
//   for(int i=0;i<nums.size();i++){

//       int count=0;

//         for(int j=0;j<nums.size();j++){
           
//            if(nums[i]==nums[j]){

//                count++;
//            }



//          }

//        if(count>n){

//             majo_ele=nums[i];
//        }

      
//   }



//   return majo_ele; this code is also getting the error at the runtime so we should think about the another approach for this problem


 int count=0;
 int maj_ele=0;

  for(int i=0;i<nums.size();i++){

        if(count==0){

            maj_ele=nums[i];
        } 

        if(maj_ele==nums[i]){

             count++;
        }else{
            count--;
        }


  }

  return maj_ele;
        
    }
};