class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
 vector<int>even;
 vector<int>odd;

 vector<int>final;


   int evens=0;
   int odds=0;


   for(int i=0;i<nums.size();i++){


     if(i%2==0){

          even.push_back(nums[i]);
     }
     else{

         odd.push_back(nums[i]);
     }

   }

   sort(even.begin(),even.end());
   sort(odd.begin(),odd.end(),greater<int>());

   for(int j=0;j<nums.size();j++){

        if(j%2==0){

          final.push_back(even[evens]);
          evens++;

     }
     else{

         final.push_back(odd[odds]);
         odds++;
     }
   }



   return final;

    }
};