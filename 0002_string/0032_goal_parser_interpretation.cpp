class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int i=0;i<command.size();i++){
            if(command[i]=='(' && command[i+1]==')'){
                ans=ans+"o";
            } //you are just checking in if . so there will be no any out of bound or index error. if it weill be out of bound then it false the condition.simple
            else if(command[i]=='(' &&  command[i+1]=='a' && command[i+2]=='l'&& command[i+3]==')')
        {
            ans=ans+"al";
        }else if(command[i]=='G'){
            ans=ans+"G";
        }
        }
        return ans;
    }
};