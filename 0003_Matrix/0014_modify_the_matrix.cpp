class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        for(int j = 0; j < matrix[0].size(); j++) { // Iterate over columns
            int greater = 0;
            // Find the maximum value in the column
            for(int i = 0; i < matrix.size(); i++) {
                if(matrix[i][j] > greater) {
                    greater = matrix[i][j];
                }
            }
            // Replace all occurrences of -1 with the maximum value in the column
            for(int i = 0; i < matrix.size(); i++) {
                if(matrix[i][j] == -1) {
                    matrix[i][j] = greater;
                }
            }
        }
        return matrix;
    }
};