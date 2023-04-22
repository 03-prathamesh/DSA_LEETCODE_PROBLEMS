class Solution {

public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        for(auto x:words){
                int found=0;
            for(int i=0;i<x.size();i++){
                for(int j=0;j<allowed.size();j++){
                    if(x[i]==allowed[j]){
                        found++;
                        break;
                    }
                }
                if(found==x.size()){
                    ans++;
                    //ans=ans+1;
                }
            }
        }
        return ans;
    }
};