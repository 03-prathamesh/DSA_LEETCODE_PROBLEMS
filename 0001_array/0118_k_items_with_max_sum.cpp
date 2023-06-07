class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        vector<int>ans;
        int sum=0;
        for(int i=0;i<numOnes;i++){
            ans.push_back(1);
        }
         for(int i=0;i<numZeros;i++){
            ans.push_back(0);
        }
        for(int i=0;i<numNegOnes;i++){
            ans.push_back(-1);
        }

        for(int i=0;i<k;i++){
            sum=sum+ans[i];
        }
        return sum;
    }
};