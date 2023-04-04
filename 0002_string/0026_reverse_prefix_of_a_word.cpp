class Solution {
   string reverse(string s){
         int i=0;
         int j=s.size()-1;
         while(i<=j){
             char temp=s[i];
             s[i]=s[j];
             s[j]=temp;
             i++;
             j--;
         }
         return s;
    }
public:
    string reversePrefix(string word, char ch) {
        string rev="";
        int ind=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                ind=i;
                break;
            }
        }
         for(int i=0;i<=ind;i++){
             rev=rev+word[i];
         }
        string ans=reverse(rev);
        for(int i=0;i<ans.size();i++){
            word[i]=ans[i];
        }
        return word;
    }
};