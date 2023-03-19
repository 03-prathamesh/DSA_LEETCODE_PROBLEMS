class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        // int ct=0;
        // for(int i=0;i<words1.size();i++){
        //     if(count(words1.begin(),words1.end(),words1[i])==1){
        //         for(int j=0;j<words2.size();j++){
        //             if(words2[j]==words1[i] && count(words2.begin(),words2.end(),words2[j])==1){
        //                 ct++;
        //                 break;
        //             }
        //         }
        //     }
        // }
        // return -1;
        map<string,int>mp;
        map<string,int>mp2;

        for(int i=0;i<words1.size();i++){
            mp[words1[i]]++;
        }
         for(int i=0;i<words2.size();i++){
            mp2[words2[i]]++;
        }
        int count=0;
        for(string x: words2){
           if(mp[x]==1 && mp2[x]==1){
               count++;
           }
        }

        return count;
    }
};