   stack<char>s1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                s1.pop();
            }
            else{
                s1.push(s[i]);
            }
        }
        string ans="";
        while(!s1.empty()){
            ans+=s1.top();
            s1.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;