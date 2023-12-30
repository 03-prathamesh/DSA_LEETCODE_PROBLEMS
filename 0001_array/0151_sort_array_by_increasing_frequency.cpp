class Solution {
public:
    static bool comp(pair<int,int>&a, pair<int,int>&b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto it : nums) m[it]++;

        vector<pair<int,int>>v1;
        for(auto x:m){
            v1.push_back({x.first,x.second});
        }
        sort(v1.begin(),v1.end(),comp);
        vector<int>ans;int count=0;
        for(auto x:v1){
              for(int i=0;i<x.second;i++){
                ans.push_back(x.first);
              }
        }
        return ans;
    }
};