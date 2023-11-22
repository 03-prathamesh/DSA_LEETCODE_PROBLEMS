class Solution {
public:
    int maxProfit(vector<int>& prices) {

         int maxProfit=0;
         int minNum=prices[0];
         for(int i=1;i<prices.size();i++){
             minNum=min(minNum,prices[i]);
             maxProfit=max(maxProfit,prices[i]-minNum);
         }
         return maxProfit;
    }
};