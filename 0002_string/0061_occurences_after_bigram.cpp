class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string>ans;
        vector<string>final;
        string temp="";
        for(int i=0;i<text.size();i++){
           
            if(text[i]!=' '){
               temp=temp+text[i];
            }
            else{
                ans.push_back(temp);
                temp="";
            }
        }
        ans.push_back(temp);
        for(int i=0;i<ans.size()-2;i++){
            if(first==ans[i] && second==ans[i+1]){
                final.push_back(ans[i+2]);
            }
        }

        return final;

    }
};