
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0;i<mat.size();i++){
               sum=sum+ mat[i][i];
               sum=sum+ mat[i][n-1-i];     
        }

        if(n%2!=0){
            int mid=n/2;
            sum=sum-mat[mid][mid];
        }
        
        return sum;
    }
};00