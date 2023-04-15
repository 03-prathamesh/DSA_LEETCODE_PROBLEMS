class Solution {
public:
    int maxPower(string s) {
        int count=0;
        int final=0;
        int cha=s[0];
        for(int i=0;i<s.size();i++){
             if(s[i]==cha){
                 count++;
             }

             final=max(count,final);
             if(s[i]!=cha){
                 cha=s[i];
                 count=1;
             }
        }
        return final;
    }
};