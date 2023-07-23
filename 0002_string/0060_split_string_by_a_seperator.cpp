class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        // string temp="";
        vector<string>v;
        for(int i=0;i<words.size();i++){
            string  temp="";
            for(int j=0;j<words[i].size();j++){
                // char ch=words[j];
                if(separator!=words[i][j]){
                   temp += words[i][j];
                }
                else{
                    if(!temp.empty()){
                       v.push_back(temp);
                    }
                    temp="";
                }
            }
            if(!temp.empty()){
                v.push_back(temp);
            }
    
            
        }
         
        return v;
    }
};