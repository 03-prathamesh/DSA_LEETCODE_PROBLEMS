class Solution {

    string reverses(string st){
         int i=0;
         int j=st.size()-1;
         while(j>=i){
             swap(st[i],st[j]);
             i++;
             j--;
         }
         return st;
       
    }
public:
    string reverseWords(string s) {
        string final=""; 
        string ans="";
        int j;
        for(int i=0;i<s.size();i++){
             if(s[i]!=' '){
                ans=ans+s[i];
             }
             else{
                 string n=reverses(ans);
                 final=final+n;
                 final=final+" ";
                 ans.clear();
                 j=i;
             }
        }
        // ans.clear();  ans already has the last string after last empty spaces
        // for(int i=j+1;i<s.size();i++){ here j+1 is very imp
        //      ans=ans+s[i];
        // }
        string n=reverses(ans);
        final=final+n;
        return final;
    }
};