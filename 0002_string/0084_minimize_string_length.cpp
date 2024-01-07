class Solution {
public:
    int minimizedStringLength(string s) {
        




        // while(true){
        //     unordered_map<char,int>mp;
        //     mp[s[0]]++;
        //     for(int i=1;i<s.size()-1;i++){
        //          if((s[i-1]==s[i] && s[i+1]==s[i])){
        //              s.erase(s[i-1],2);
        //          }
        //          else if(s[i+1]==s[i]){
        //              s.erase(s[i+1],1);
        //          }
        //          else if(s[i-1]==s[i]){
        //              s.erase(s[i-1],1);
        //          }

        //          mp[s[i]]++;
        //     }

        //     int ans=0;
        //     for(auto x:mp){
        //         if(x.second<=1){
        //            ans++;
        //         }
        //     }
        //     if(ans==mp.size()){
        //         return s.size();
        //     }

        // }
        // return s.size();
        // unordered_map<char,int>mp;
        // for(auto x:s){
        //     mp[x]++;
        // }
      
        // int prev=s[0];
        // for(int i=1;i<s.size();i++){
        //     if(s[i]==prev){

        //         mp[s[i]]--;
        //     }
        //     else{
        //         prev=s[i];
        //     }

        // }
        // int ans=0;
        // for(auto x:mp){
        //     int c=x.second;
        //     // while(c!=0){
        //     //     ans++;
        //     //     c--;
        //     // }
        //     ans=ans+c;
        // }
        // return ans;
        set<char>s1;
        for(auto x:s){
            s1.insert(x);
        }
        return s1.size();
    }
};