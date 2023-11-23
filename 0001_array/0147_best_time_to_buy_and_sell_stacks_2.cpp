class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP=prices[0];
        int maxProfit=0;
        int final=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<prices[i-1]){
                
                final=final+maxProfit;
                minP=prices[i];
                maxProfit=0;
            }
            else{
              minP=min(minP,prices[i]);
              maxProfit=max(maxProfit,prices[i]-minP);
            }
        }
        // final=final+maxProfit;
        // if(final==0){
            final=final+maxProfit;

        // }
        return final;
    }
};