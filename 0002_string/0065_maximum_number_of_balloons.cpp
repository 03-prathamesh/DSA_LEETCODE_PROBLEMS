class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        vector<int>temp;
        string s1="balloon";
        for(auto x:text){
            mp[x]++;
        }
         mp['o']=mp['o']/2;
        mp['l']=mp['l']/2;
        for(auto x:mp){
            if(x.first=='b' || x.first=='a' ||x.first=='l' ||x.first=='l' ||x.first=='o' ||x.first=='o' ||x.first=='n'){
                temp.push_back(x.second);

                
            }
        }
        unordered_map<char,int>mp2;
        for(int i=0;i<s1.size();i++){
            mp2[s1[i]]++;
        }
        for(int i=0;i<s1.size();i++){
           
            if(mp[s1[i]]==0 ){
                return 0;
            }
        }
        
         return *min_element(temp.begin(),temp.end());
    }
};