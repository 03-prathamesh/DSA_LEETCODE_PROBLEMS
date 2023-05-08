class Solution {
public:
    string largestGoodInteger(string num) {
        int bigger=0;
        string ans="";
        vector<string>final;
        int prev_ele=num[0];
               prev_ele=num[0];
                bigger=1;
                ans="";
                ans=ans+num[0];
        for(int i=1;i<num.size();i++){
            if(num[i]==prev_ele){
                bigger++;
                ans=ans+num[i];
            }
            else{
                prev_ele=num[i];
                bigger=1;
                ans="";
                ans=ans+num[i];
            }

            if(ans.size()>=3){
                final.push_back(ans);
                ans="";
            }
        }

       sort(final.begin(),final.end());
       if(final.size()>=1){
           return final[final.size()-1];
       }
       return "";

        return "";
    }
};