class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
        for(int i=0;i<sentences.size();i++){
              string c=sentences[i];
              int count=1;
            for(int j=0;j<c.size();j++){
                if(c[j]==' '){
                    count++;
                }
            }
               maxi=max(maxi,count);
        }

        return maxi;
    }
};