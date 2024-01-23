class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        int fact=0;
        int ans1;
        int ans2;
        for(int i=0;i<nums.size();i++){

            mp[nums[i]]++;
        }
        for(int i=1;i<=nums.size();i++){
            fact=fact+i;
        }
        int sum=0;
        for(auto x:mp){
            if(x.second>=2){
               ans1=x.first;
            }
            sum=sum+x.first;
        }
        ans2=fact-sum;
        return {ans1,ans2};
    }
};