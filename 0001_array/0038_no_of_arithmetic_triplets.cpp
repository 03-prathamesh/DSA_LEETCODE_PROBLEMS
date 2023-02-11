lass Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {


 int count=0;      

 for(int i=0;i<nums.size();i++){


    for(int j=i+1;j<nums.size();j++){


        if(nums[j]-nums[i]==diff){

          int k=j+1;

          for(int p=k;p<nums.size();p++){


              if(nums[p]-nums[j]==diff){

                   count++;
                   break;
              }

             }

            //  break; you can apply or not
            
         }




    }




 }

return count;
    }
};