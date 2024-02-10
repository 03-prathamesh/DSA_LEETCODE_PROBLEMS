class Solution {
public:
    string triangleType(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<3;i++){
            mp[nums[i]]++;
        }
        if(mp.size()==1){
            
             bool f=true;
            if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[0]+nums[2]>nums[1] ){
                f=false;
            }
            else{
                f=true;
            }
            if(f==true){
                return "none";
            }
            else{
                 return "equilateral";
            }
          
        }
        else if(mp.size()==2){
            
            bool f=true;
            if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[0]+nums[2]>nums[1] ){
                f=false;
            }
            else{
                f=true;
            }
            if(f==true){
                return "none";
            }
            else{
                return "isosceles";
            }
            
        }
        else if(mp.size()==3){
            bool f=true;
            if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[0]+nums[2]>nums[1] ){
                f=false;
            }
            else{
                f=true;
            }
            if(f==true){
                return "none";
            }
            else{
                return "scalene";
            }
           
          
        }
        return "";
    }
};