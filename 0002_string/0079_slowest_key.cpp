class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        unordered_map<char,int>mp;
        mp[keysPressed[0]]=releaseTimes[0];
        for(int i=1;i<releaseTimes.size();i++){
            mp[keysPressed[i]]=max(mp[keysPressed[i]],releaseTimes[i]-releaseTimes[i-1]);  
        }
        int big_num=0;
        char ans;
        for(auto x:mp){
            if(big_num<=x.second ){
                if(x.second>big_num || x.first>ans){
                    ans=x.first;
                }
                big_num=x.second;
            }

        }
        return ans;
    }
};