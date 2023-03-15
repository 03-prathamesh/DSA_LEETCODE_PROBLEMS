class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest=0;
        for(int i=0;i<accounts.size();i++){
            int count=0;
            for(int j=0;j<accounts[i].size();j++){
                count=count+accounts[i][j];
            }
            richest=max(count,richest);
        }
        return richest;
    }
};