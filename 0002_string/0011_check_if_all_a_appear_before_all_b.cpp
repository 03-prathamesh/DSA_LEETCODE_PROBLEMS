class Solution {
public:
    bool checkString(string s) {
       int c=0;
       for(int i=0;i<s.size();i++){
           if(s[i]=='a'){
               c++;
           }
       }

       int count=0;
       for(int i=0;i<c;i++){
           if(s[i]=='b'){
               return false;
           }
       }
       return true;
    }
};