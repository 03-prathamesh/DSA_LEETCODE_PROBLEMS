class Solution {
public:
    bool detectCapitalUse(string word) {
        int ans=0;
        int count=0;
        for(int i=1;i<word.size();i++){
            
            if((word[i]>='a' && word[i]<='z')&& (word[0]>='A' && word[0]<='Z')){
                count++;
            }
        }

         if(count==word.size()-1){
             return true;
         }
     
         int c=0;
         for(int i=0;i<word.size();i++){
            if((word[i]>='a' && word[i]<='z')){
                c++;
            }
        }

        if(c==word.size()){
            return true;
        }
          int ct=0;
         for(int i=0;i<word.size();i++){
            if((word[i]>='A' && word[i]<='Z')){
                ct++;
            }
        }

          if(ct==word.size()){
              return true;
          }

         return false;
        
    }
};