class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int big_freq_num;
        int freq=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second>freq){
                freq=x.second;
                big_freq_num=x.first;
            }

        }
        
        // for(i;i<nums.size();i++){
        //     if(nums[i]==big_freq_num){
        //         break;
        //     }
        // }
        // for(i;i<nums.size();i++){
        //     if(freq==0){
        //         return ans;
        //     }

        //     if(nums[i]==big_freq_num){
        //         ans++;
        //         freq--;
        //     }
        //     else{
        //         ans++;
        //     }
        int min_length=nums.size()+1;
        for(int i=0;i<nums.size();i++){
            int ans=0;
            int dup=freq;
        
            if(mp[nums[i]]==freq){
                int ele=nums[i];
                for(int j=i;j<nums.size();j++){
                    if(nums[j]==ele){
                        ans++;
                        dup--;
                        
                    }
                    else{
                        ans++;
                    }

                    if(dup==0){
                        min_length=min(min_length,ans);
                    }
                }
            }
        }

        
        return min_length;
    }
};