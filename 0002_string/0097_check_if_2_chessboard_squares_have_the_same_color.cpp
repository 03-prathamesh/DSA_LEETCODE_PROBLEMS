class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int ask1=coordinate1[0]-'0';
        int ask2=coordinate2[0]-'0';
        int add1=ask1+(coordinate1[1]-'0');
        int add2=ask2+(coordinate2[1]-'0');
        if((add1%2==0)&&(add2%2==0)|| (add1%2!=0)&&(add2%2!=0)){
            return true;
        }
        return false;
        
    }
};