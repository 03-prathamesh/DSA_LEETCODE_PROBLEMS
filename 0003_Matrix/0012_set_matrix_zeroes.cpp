class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<pair<int,int>>zeros;
        for(int i=0;i<matrix.size();i++){
            pair<int,int>temp;
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                      zeros.push_back({i,j});
                    // toSetZero.push_back(make_pair(i, j)) alternate syntax to above syntax ;
                   
                }
            }
        }

        for(auto x:zeros){
            int  row=x.first;
            int col=x.second;
            for(int i=0;i<matrix[row].size();i++){
                matrix[row][i]=0;
            }

            for(int j=0;j<matrix.size();j++){
                matrix[j][col]=0;
            }
        }
    }
};