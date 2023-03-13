class Solution {
public:
    char findTheDifference(string s, string t) {
       for(int i=0;i<t.size();i++){
           int count=0;
           for(int j=0;j<s.size();j++){
               if(t[i]==s[j]){
                   count++;
                   break;
               }
           }
           if(count==0){
               return t[i];
           }
       }
       return -1;
    }
};