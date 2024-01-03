class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>zero;
        unordered_map<int,int>one;
        vector<vector<int>>ans;
        vector<int>temp1;
        vector<int>temp2;
      
        for(int i=0;i<matches.size();i++){
           
            zero[matches[i][0]]++;
            one[matches[i][1]]++;

        }
        for(auto x:zero){
            if(one[x.first]==0){
                temp1.push_back(x.first);
            }
        }
        for(auto x:one){
            if(x.second==1){
                temp2.push_back(x.first);
            }
        }
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        ans.push_back(temp1);
        ans.push_back(temp2);
        return ans;
    }
    
};
