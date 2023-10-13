class Solution {
public:
//  bool reverse(string& a,  string& temp) {
//         int f = 0;
//         int l = a.size() - 1;
//         while (l >= f) {
//             char tp = a[f];
//             a[f] = a[l];
//             a[l] = tp;
//             f++;
//             l--;
//         }
//         return a==temp;
//     }
    int maximumNumberOfStringPairs(vector<string>& words) {
        // int final=0;
        // for(int i=0;i<words.size();i++){
        //     string temp=words[i];
        //     for(int j=i+1;j<words.size();j++){
            
        //      if(i!=j){
        //         bool ans=reverse(temp,words[j]);
        //         if(ans){
        //            final++;
        //         }
        //      }
        //     }
        // }
        // return final;
        int count=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                string ans=words[j];
                reverse(ans.begin(),ans.end());
                if(words[i]==ans){
                    count++;
                }
            }
        }
        return count;
    }
};