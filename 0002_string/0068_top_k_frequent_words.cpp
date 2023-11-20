class Solution {
public:
        bool compare(pair<string,int>a,pair<string,int>b){
            if(a.second!=b.second){
                return a.second>b.second;
            }
            return a.first<b.first;
        }
    vector<string> topKFrequent(vector<string>& words, int k) {
       
        vector<string>ans;
        unordered_map<string,int>mp;
        vector<pair<string,int>>v1;

        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        
        for(auto x:mp){
            v1.push_back({x.first,x.second});
        }

        // sort(v1.begin(),v1.end(),compare);
        sort(v1.begin(), v1.end(), [this](pair<string,int>a, pair<string,int>b){              return compare(a, b);
        });
        int x=0;
        for(auto x:v1){
            ans.push_back(x.first);
            if(ans.size()==k){
                break;
            }
        }
        return ans;
    }
};