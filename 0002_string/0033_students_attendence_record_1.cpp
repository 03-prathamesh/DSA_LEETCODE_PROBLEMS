class Solution {
public:
    bool checkRecord(string s) {
        int ab=0;
        int late=0;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                ab++;
            }

            if(s[i]=='L'){
                late++;
            }
            else{
                sum=max(late,sum);
                late=0;
            } 

        }
        sum=max(late,sum);
       
        if(sum>=3 || ab>=2){
            return false;
        }
        return true;
    }
};