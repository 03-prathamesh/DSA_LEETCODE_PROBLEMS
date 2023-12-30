class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        sort(prices.begin(),prices.end());
        int add=0;
        for(int i=0;i<2;i++){
           add=add+prices[i];
        }
        if(add>money){
              return money;
        }
        
            return money-add;
        
    }
};