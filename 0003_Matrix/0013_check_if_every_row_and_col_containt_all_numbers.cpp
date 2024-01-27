class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int total_sum=0;
        set<int>s1;
        set<int>s2;
        for(int i=0;i<matrix.size();i++){
    
            for(int j=0;j<matrix[i].size();j++){
                if(s1.find(matrix[i][j])!=s1.end()){
                    return false;
                }
                else{
                    s1.insert(matrix[i][j]);
                }

                if(s2.find(matrix[j][i])!=s2.end()){
                    return false;
                }
                else{
                    s2.insert(matrix[j][i]);
                }
            }

            s1.clear();
            s2.clear();
        }
        
        return true;
    }
};