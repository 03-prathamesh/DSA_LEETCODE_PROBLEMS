class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        string temp="";
        int div=s.size()%k;
        int t=0;
        for(int i=0;i<s.size();i++){
            if(t==k){
                
                t=0;
                ans.push_back(temp);
                temp.clear(); //temp="";;
            }
            temp=temp+s[i];
            t++;
        }
  
        if(div>0){
            for(int i=0;i<k-div;i++){
                temp=temp+fill;
            }
        }
        ans.push_back(temp);
        return ans;

    }
};