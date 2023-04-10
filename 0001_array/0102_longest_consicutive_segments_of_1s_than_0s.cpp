class Solution {
public:
    bool checkZeroOnes(string s) {
        int ans=0;
        int final=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ans++;
            }
                final=max(final,ans);
              if(s[i]=='0'){  
                ans=0;
              }
        }

        int ans1=0;
        int final1=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                ans1++;
            }
           
                final1=max(final1,ans1);

            if(s[i]=='1'){  
                ans1=0;
            }
        }
        

        cout<<final<<endl;
        cout<<final1<<endl;

       if(final>final1){
           return true;
       }
       else if(final==final1){
           return false;
       }
       
       return false;
    }
};