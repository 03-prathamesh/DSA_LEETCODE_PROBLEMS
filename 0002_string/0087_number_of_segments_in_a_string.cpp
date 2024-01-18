class Solution {
public:
    int countSegments(string s) {
        if(s.size()==0){
            return 0;
        }
        string ans="";
        int count=0;
       for(int i=0;i<s.size();i++){
          if(s[i]!=' '){
              ans=ans+s[i];
          }
          else{
              if(ans.size()>0){
                  count++;
              }
              ans="";
          }
       }
       if(ans.size()>0){
           return count+1;
       }
       return count;
    }
};