class Solution {
public:
    string reverseVowels(string s) {
      vector<char>ans;
      for(int i=0;i<s.size();i++){
          if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
              ans.push_back(s[i]);
          }
      }
      int i=0;
      int j=ans.size()-1;
      while(j>=i){
          char temp=ans[i];
          ans[i]=ans[j];
          ans[j]=temp;
          i++;
          j--;
      }
       int p=0;
       for(int i=0;i<s.size();i++){
          if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
             s[i]=ans[p];
             p++;
          }
      }

      return s;
    }

};