class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ans;
        ans.push_back(0);
        int j=0;
        for(int i=0;i<gain.size();i++){
             int cal=ans[j]+gain[i];
             ans.push_back(cal);
             j++;
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
    }
};