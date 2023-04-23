class Solution {
    
public:
    string capitalizeTitle(string title) {
    
        int n= title.size();
        
        for(int i=0; i<n; i++){
            title[i] = tolower(title[i]);   
        }
        string ans="";
        string final="";
        for(int i=0;i<n;i++){
            if(title[i]!=' '){
                ans=ans+title[i];
            }
            else{
                if(ans.size()>2){
                    ans[0]=toupper(ans[0]);
                    final=final+ans;
                    final=final+' ';
                    ans="";
                }
                else{
                    final=final+ans;
                    final=final+' ';
                    ans="";
                }
            }

        }
                if(ans.size()>2){
                    ans[0]=toupper(ans[0]);
                    final=final+ans;

                }
                else{
                    final=final+ans;
                }
        return final;
    }
};