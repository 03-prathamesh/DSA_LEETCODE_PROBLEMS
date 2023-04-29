class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans=0;
        int a,b,c;
        
        if(s.length()<3) return 0;

         for(int i=0;i<s.size()-2;i++){
            a=s[i];
            b=s[i+1];
            c=s[i+2];
            if(a!=b && b!=c && a!=c){
                ans++;
            }
         }
        return ans;
    }
};