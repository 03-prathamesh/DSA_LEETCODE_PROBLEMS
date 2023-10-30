class Solution {
public:
    bool repeatedSubstringPattern(string s) {
       for(int i=1;i<=s.size()/2;i++){
           string temp=s.substr(0,i);
           string result=temp;
            while(result.size()<s.size()){
               result+=temp;
           }
           if(result==s){
               return true;
           }
       }
       return false;

       
    }
};