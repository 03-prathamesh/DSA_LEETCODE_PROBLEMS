class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.size()==2){
            return false;
        }
        int alice=0;
        int bob=0;
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i-1]=='A' && colors[i+1]=='A' && colors[i]=='A'){
                alice++;
            }
            else if(colors[i-1]=='B' && colors[i+1]=='B' && colors[i]=='B'){
                bob++;
            }
        }
        if(alice>bob){
            return true;
        }
        return false;
    }
};