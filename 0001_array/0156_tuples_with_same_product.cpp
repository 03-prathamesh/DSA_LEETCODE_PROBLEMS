class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                mp[nums[i]*nums[j]]++;
            }
        }
        for(auto x:mp){
            int n=x.second;
            int ans=n*(n-1)/2;
            sum=sum+ans*8;
        }
        return sum;
    }
};