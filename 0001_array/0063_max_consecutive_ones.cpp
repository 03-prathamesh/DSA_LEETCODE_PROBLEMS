class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
 vector<int>ans;
  int first_ele;
  int count=0;
 int n=nums.size()-1;

   for(int i=0;i<nums.size();i++){
        

        if(nums[i]==1){

            
             count++;

        }
        else{
            
            ans.push_back(count);
            count=0;
        }
  
   }

   ans.push_back(count);
int greater=ans[0];

for(int i=1;i<ans.size();i++){
     
     if(ans[i]>greater){

         greater=ans[i];
     }
}


return greater;
    }
};