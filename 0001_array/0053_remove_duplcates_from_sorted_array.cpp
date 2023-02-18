class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
set<int>s1;


        for(int i=0;i<nums.size();i++){


            s1.insert(nums[i]);
          
        }


  int ans=s1.size();
nums.clear();


        for(int it:s1){
       
            nums.push_back(it);  
             
        }

       return nums.size(); 
    }
};