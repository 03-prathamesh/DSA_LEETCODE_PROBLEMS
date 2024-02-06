class Solution {
public:
    bool isValid(string s) {
        
        if(s.size()==1){
            return false;
        }
        stack<char>s1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                s1.push(s[i]);
            }
            else{
                if(s1.empty()){
                    return false;
                }


                if((s[i]=='}' && s1.top()=='{') || (s[i]==']' && s1.top()=='[')||(s[i]==')' && s1.top()=='(')){
                    s1.pop();
                }
                else{
                    return false;
                }
            }
        }
        return s1.empty(); // this is main checking is stack is empty or not
        
    }
};