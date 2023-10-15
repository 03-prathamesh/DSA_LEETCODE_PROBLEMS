class Solution {
public:
    int similarPairs(vector<string>& words) {
        int ans=0;
      
        for(int i=0;i<words.size();i++){
           set<char>s1(words[i].begin(),words[i].end());
            string temp(s1.begin(),s1.end());
            words[i]=temp;
           
        }
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(words[i]==words[j]){
                    ans++;
                }
            }
        }
       
        return ans;

    }
};