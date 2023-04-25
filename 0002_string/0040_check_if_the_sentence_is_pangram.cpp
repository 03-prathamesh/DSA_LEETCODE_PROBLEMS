class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mp;
        for(int i=0;i<sentence.size();i++){
            mp[sentence[i]]++;
        }
        int ans=mp.size();
        if(mp.size()==26){
            return true;
        }

        //     unordered_set <char> st(sentence.begin() , sentence.end()); 
        //    return st.size() == 26;
        return false;
    }
};