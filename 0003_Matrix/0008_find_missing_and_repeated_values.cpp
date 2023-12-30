class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int missing=0;
        unordered_map<int,int>mp;
        int count=0;
        int sum2=0;
        int duplicate_ele=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                mp[grid[i][j]]++;
                count++;
                sum2=sum2+grid[i][j];
            }
        }
        for(auto x:mp){
            if(x.second>1){
               duplicate_ele=x.first;
            } 
        }
        int sum=0;
        for(int i=1;i<=count;i++){
           sum=sum+i;
        }
        sum2=sum2-duplicate_ele;
        missing=sum-sum2;
        return {duplicate_ele,missing};
    }
};