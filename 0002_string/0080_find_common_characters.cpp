class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        vector<string>ans;
        map<char,int>mp1;
        map<char,int>mp2;

        for(int i=0;i<words[0].size();i++){
            mp1[words[0][i]]++;
        }
        for(int i=1;i<words.size();i++){
            string word=words[i];
            for(int j=0;j<word.size();j++){
                if(mp1.find(word[j])!=mp1.end() && mp1[word[j]]>0){
                   mp1[word[j]]--;
                   mp2[word[j]]++;
                }
                
            }
            mp1.clear();
            mp1 = mp2;
            mp2.clear();
        }
        for(auto x:mp1){
           int freq=x.second;
           string s="";
           s=s+x.first;
           while(freq!=0){
               ans.push_back(s);
               freq--;
           }
        }
        return ans;
    }
};