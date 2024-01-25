class Solution {
public:
    int minDeletion(vector<int>& nums) {
        
        // int ans=0;
        // while(true){
        //    bool del=false;

           
        //    for(int i=0;i<nums.size()-1;i+=2){
        //        if(nums[i]==nums[i+1]){
        //           nums.erase(nums.begin() + i + 1);
        //           //nums.erase(i+1,1) this works in the string , not in array
        //            ans++;
        //            del=true;
        //            break;
        //        }
        //    }

         
        //    if(del==false && nums.size()%2!=0){
        //        nums.erase(nums.end()-1);
        //        return ans;
        //    }

        //    if(del==false && nums.size()%2==0){
        //        return ans;
        //    }
        // }
     
        // return ans;

        if(nums.size()==1){
            return 1;
        }

        int i=0;
        int ans=0;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                i++;
                ans++;
            }
            else{
                i+=2;
            }

            if(i==nums.size()-1){ //even index last element should be delete
                ans++;
            }
        }

        return ans;
    }
};