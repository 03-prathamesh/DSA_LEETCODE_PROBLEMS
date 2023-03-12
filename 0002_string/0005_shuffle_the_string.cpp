class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string news=s;
        for(int i=0;i<indices.size();i++){

            s[indices[i]]=news[i];
        }

        return s;
    }
};