class Solution {
public:
    string removeStars(string s) {
       
    //     while(true){ TLE (but able to recall and uses this approach which i learned in prev example during solving a problem)
         
    //         bool check=true;
    //         for(int i=1;i<s.size();i++){
    //             if(s[i]=='*'){
    //                  s.erase(i-1,2);
    //                 check=false;
    //                 break;

    //             }
    //         }
    //         if(check){
    //              break;
    //         }
    //     }
    //    return s;
         string ans="";
         for(int i=0;i<s.size();i++){
             if(s[i]=='*'){
                 ans.pop_back();
             }
             else{
                //  ans=ans+s[i];    --gives memory limit exceedded
                ans+=s[i];   //code accepted , this is faster thatn this
             } 
         }
         return ans;
    }
};