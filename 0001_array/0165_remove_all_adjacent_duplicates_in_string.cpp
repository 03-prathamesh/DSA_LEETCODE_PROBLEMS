class Solution {
public:
    string removeDuplicates(string s) {
        
    //    while(true){
    //        int prev=s[0];
    //        bool f=false;
    //        for(int i=1;i<s.size();i++){
    //            if(s[i]==prev){
    //                s.erase(i-1,2);
    //                f=true;
    //                break;
                   
    //            }
    //            else{
    //                prev=s[i];
    //            }
    //        }

    //        if(f==false){
    //            return s;
    //        }
    //        else if( s.size()==0){
    //            return "";
    //        }

    //    }
    //    return s;
    string ans="";
    ans+=s[0];
    int prev=ans[0];
    int j=0;
    for(int i=1;i<s.size();i++){
        if(ans.size()==0){
            prev=s[i];
            ans.push_back(s[i]);
            j=ans.size()-1;
        }
        else if(s[i]==ans[j]){
            ans.pop_back();
            j=ans.size()-1;
        }
        else{
            ans+=s[i];
            j++;
        }
    }
       
    return ans;
    }
};