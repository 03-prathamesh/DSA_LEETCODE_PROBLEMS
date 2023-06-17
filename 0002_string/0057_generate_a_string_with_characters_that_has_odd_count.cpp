class Solution {
public:
    string generateTheString(int n) {
        string ans="";
        if(n==1){
            ans=ans+'a';
        }
        else if(n==2){
            ans=ans+'a';
            ans=ans+'b';
        }
        else if(n%2==0){
            int iter=n-1;
            while(iter--){
                ans=ans+'a';
            }
            ans=ans+'b';
        }
        else{
            int iter=n-2;
            while(iter--){
                ans=ans+'a';
            }
            ans=ans+'b';
            ans=ans+'c';
        }
        return ans;
    }
};