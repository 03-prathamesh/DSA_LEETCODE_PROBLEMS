class Solution {
public:
    string sortVowels(string s) {
        vector<char>temp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i'||  s[i]=='o' || s[i]=='u'){
                temp.push_back(s[i]);
            }
        }
        // cout<<temp<<endl;
        sort(temp.begin(),temp.end());
        // cout<<temp;
       
        int j=0;
        for(int i=0;i<s.size();i++){
                      if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i'||  s[i]=='o' || s[i]=='u'){
                s[i]=temp[j];
                          j++;
            }
        }
        return s;
    }
    
};