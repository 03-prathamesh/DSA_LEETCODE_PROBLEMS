class Solution {
public:
    char repeatedCharacter(string s) {
        int ress=INT_MAX;
        char res;
        int mini;
        int js=s.size()+1;
        vector<int>temp(s.begin(),s.end());
        sort(temp.begin(),temp.end());
        vector<char>ans;
       ans.push_back(temp[0]);
        int prev_ele=temp[0];
        for(int i=1;i<s.size();i++){
            if(s[i]!=prev_ele){
                ans.push_back(temp[i]);
                prev_ele=temp[i];
            }
        }

       
        // for(auto x:ans){
        //     cout<<x<<" ";
        // }

        
        // 
        for(int i=0;i<ans.size();i++){
            int count=0;
            for(int j=0;j<s.size();j++){
                if(ans[i]==s[j]){
                    count=count+1;
                    if(count==2){
                        mini=j;
                        ress=min(ress,mini);
                        break;
                    }
                }
            }
        }
        return s[ress];
    }
};