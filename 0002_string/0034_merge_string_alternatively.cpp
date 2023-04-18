class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int n=word1.size();
        int m=word2.size();
        int greater=max(n,m);
        int i=0;
        int j=0;
        while(i<n && j<m){
            ans=ans+word1[i];
            ans=ans+word2[j];
            i++;
            j++;
        }
        for(int p=i;p<n;p++){
            ans=ans+word1[p];
        }
        for(int p=j;p<m;p++){
            ans=ans+word2[p];
        }
        return ans;
    }
};