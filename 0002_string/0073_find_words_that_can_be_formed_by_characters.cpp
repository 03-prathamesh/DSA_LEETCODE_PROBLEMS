class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum=0;
        for(int i=0;i<words.size();i++){
            unordered_map<char,int>mp;
            int count=0;
            for(auto x:chars){
                mp[x]++;
            }

            for(int j=0;j<words[i].size();j++){
                if(mp[words[i][j]]>0){
                     mp[words[i][j]]--;
                     count++;
                }
            }
            if(count==words[i].size()){
                sum=sum+count;
            }
        }
        return sum;
    }
};