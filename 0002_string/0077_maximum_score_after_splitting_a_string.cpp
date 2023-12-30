class Solution {
public:
    int maxScore(string s) {
       int ones_count=count(s.begin(),s.end(),'1');
       int max_value=0;
       int zero_count=0;
       for(int i=0;i<s.size()-1;i++){
           if(s[i]=='1'){
               ones_count--;
           }
           else{
               zero_count++;
           }
           max_value=max(max_value,zero_count+ones_count);
       }
        return max_value;
    }
};