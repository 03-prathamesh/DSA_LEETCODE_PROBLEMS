class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=0;
        string temp="";
        set<int>s1(s.begin(),s.end());
        if(s.size()==s1.size()){
            return -1;
        }
        if(s.size()==2){
            return 0;
        }
        int x;
        for(int i=0;i<s.size();i++){

            for(int j=i+1;j<s.size();j++){
                 if(s[i]==s[j]){
                     x=j-i-1;
                     ans=max(ans,x);
                 }
            } 
        }
        return ans;
    }
};