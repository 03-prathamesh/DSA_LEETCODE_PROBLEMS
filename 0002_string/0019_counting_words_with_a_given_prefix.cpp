class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            string c=words[i];
            int count=0;
            for(int j=0;j<pref.size();j++){
                if(c[j]!=pref[j]){
                   break; //if you dont give break here the itt will give you the runtime  error
                }
                else{
                    count++;
                }
            } 

            if(count==pref.size()){
                ans++;
            }
        }
        return ans;
    }
};