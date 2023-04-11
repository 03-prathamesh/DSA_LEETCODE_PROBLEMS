class Solution {
public:
    int percentageLetter(string s, char letter) {
        int siz=s.size();
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==letter){
                count++;
            }
        }
        if(count==0){
            return 0;
        }
        
        int ans=(count*100)/s.size();
       
        return ans;
    }
};