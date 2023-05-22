class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mp;
        for(auto x:nums){
           mp[x]++;
        }
        multimap<int,int,greater<int>>mt; //stoores the keys in the decresing order
        for(auto x:mp){
            mt.insert({x.second,x.first});
        }
        int count=0;
        for(auto x:mt){
            ans.push_back(x.second);
            count++;
            if(count==k){
                break;
            }

        }
        return ans;
        
    }
};