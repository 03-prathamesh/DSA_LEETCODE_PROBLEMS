class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end(),greater<int>());
        int i=0;
        while(stones.size()!=1 && stones.size()!=0){
            int res=abs(stones[i]-stones[i+1]);
             if(res!=0){
                 stones.erase(stones.begin());
                 stones[0]=res;
                 sort(stones.begin(),stones.end(),greater<int>());
             }
             else{
                 stones.erase(stones.begin(),stones.begin()+2);
             }
        }
        if(stones.size()==1){
            return stones[0];
        }
        return 0;
    }
};