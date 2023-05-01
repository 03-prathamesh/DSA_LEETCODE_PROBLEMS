class Solution {
public:
    string replaceDigits(string s) {
       string ans="";
       for(int i=0;i<s.size();i++){
           if(s[i]>='0' && s[i]<='9'){
               char ch=s[i]-'0';
               s[i]=s[i-1]+ch;
               ans=ans+s[i];
           }
           else{
             ans=ans+s[i];
           }
       }
        return ans;
    }
};