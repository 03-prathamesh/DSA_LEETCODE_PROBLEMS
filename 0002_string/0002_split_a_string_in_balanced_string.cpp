class Solution {
public:
    int balancedStringSplit(string s) {
       int balanced_var=0;
       int ans=0;
       for(int i=0;i<s.size();i++){
           if(s[i]=='R'){
               balanced_var++;
           }else{
               balanced_var--;
           }

           if(balanced_var==0){
              ans++;
           }
       } 
       return ans;
    }
};