class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>mp;
        for(auto x:candyType){
            mp[x]++;
        }
        int main=0;
        int ans=candyType.size()/2;
        if(ans<=mp.size()){
            return ans;
        }
        else{
            return mp.size();
        }
        return main;
    }
};