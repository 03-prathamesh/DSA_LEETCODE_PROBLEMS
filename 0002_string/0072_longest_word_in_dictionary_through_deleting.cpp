class Solution {
public:
    bool isSubsequence(string &word , string &s){
        
          int j=0;
          for(int i=0;i<s.size();i++){
              if(s[i]==word[j]){
                  j++;
              }
          }
          return j==word.size();
    }
    string findLongestWord(string s, vector<string>& dictionary) {
          
            string ans="";
            for(int i=0;i<dictionary.size();i++){
                if(dictionary[i].size()>ans.size() || (dictionary[i].size()==ans.size() && dictionary[i]<ans)){
                    if(isSubsequence(dictionary[i],s)){
                        ans=dictionary[i];
                    }
                }
            }
        return ans;

    }
};