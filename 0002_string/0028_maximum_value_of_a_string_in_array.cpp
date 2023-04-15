class Solution {
      int func(string s){
          int sum=0;
          for(int i=0;i<s.size();i++){
             sum=sum*10+s[i]-'0';
          }
          return sum;
      }
public:

    int maximumValue(vector<string>& strs) {
        
        vector<int>ans;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            int flag=0;
            for(int j=0;j<temp.size();j++){
                if((temp[j]>='0' && temp[j]<='9')){
                    flag++;
                }
            }
            if(flag>=temp.size()){
                int p = func(temp);
                ans.push_back(p);
            }
            else{
                ans.push_back(temp.size());
            }
        }
        for(auto x: ans){
            cout<<x<<" "<<endl;
        }
        int sum1=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]>sum1){
                sum1=ans[i];
            }
        }
        return sum1;
    }
};