class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
        }
        string ans1="";
        string ans2="";
        int p=0;
        int q=0;
        if(count==1){
            
            for(int i=0;i<s.size();i++){
                if(s[i]=='0'){
                    s[p]=s[i];
                    p++;
                }
                
            }

            for(int i=0;i<count;i++){
                s[p]='1';
            }
            return s;
        }
        else{
            for(int i=0;i<s.size();i++){
                
                if(s[i]=='1'){
                    ans1+=s[i];
                    q++;
                }

                if(q==(count-1)){
                    break;
                }
              
            }
             
             for(int i=0;i<s.size();i++){
                 if(s[i]=='0'){
                     ans1+=s[i];
                     q++;
                 }
             }
            ans1=ans1+'1';
            return ans1;
        }
        return 0;
    }
};