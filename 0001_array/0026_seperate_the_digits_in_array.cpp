class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        vector<int>ans;

        for(int i=0;i<nums.size();i++){

    
           vector<int>temp;
             while(nums[i]!=0){
                    
                   
                     int digit=nums[i]%10;
                     temp.push_back(digit);
                     nums[i]=nums[i]/10;
                     
                    
             }

                  reverse(temp.begin(),temp.end());
        
             for(int i=0;i<temp.size();i++){

                  ans.push_back(temp[i]);
             }


        }

        return ans;
        
    }
};