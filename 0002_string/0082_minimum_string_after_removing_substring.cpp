class Solution {
public:
    int minLength(string s) {
        int same=s.size();
        while(true){
            same=s.size();
            for(int i=0;i<s.size()-1;i++){
                if((s[i]=='A' && s[i+1]=='B')||(s[i]=='C' && s[i+1]=='D')){
                    s.erase(i,1);
                    s.erase(i,1); //s.erase(s.begin()+i);
                    break;
                }
        
            if(s.size()==0){
                return 0;
            }

            if(same==s.size()){
                return same;
            }
        }
        return same;
    }
};