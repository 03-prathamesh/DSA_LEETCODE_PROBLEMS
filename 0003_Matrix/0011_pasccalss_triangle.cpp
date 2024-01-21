class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        if(numRows==1){
            return {{1}};
        }
        vector<vector<int>>ans;
        ans.push_back({1});
        ans.push_back({1,1});
        for(int i=2;i<numRows;i++){
            vector<int>row;
            row.push_back(1);
            for(int j=0;j<i-1;j++){
                int add=ans[i-1][j]+ans[i-1][j+1];
                row.push_back(add);
            }
            row.push_back(1);
            ans.push_back(row);
        }
        return ans;
    }
};