class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>ans;
        int n=nums.size();
        int m=nums[0].size();
        map<int,int>mp;
        // for(int i=0;i<1;i++){
        //     for(int j=0;j<nums[0].size();j++){
        //         mp[nums[i][j]]++;
        //     }
        // }
        // int c=0;
        // for(int i=1;i<nums.size();i++){
        //     for(int j=0;j<nums[i].size();j++){
        //         if(mp[c]==nums[i][j]){
        //             ans.push_back(nums[i][j]);
        //             c++;
        //         }
        //     }
        // }
        // sort(ans.begin(),ans.end());
        // return ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                mp[nums[i][j]]++;
            }
        }

        for(auto it:mp){
            if(it.second==n){
                ans.push_back(it.first);
            }
        }

        sort(ans.begin(),ans.end());
        return ans;
        
    }
};