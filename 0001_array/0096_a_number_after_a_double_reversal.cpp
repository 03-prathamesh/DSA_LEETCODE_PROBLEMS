class Solution {
    int doubleRev(int n){
        int rev=0;
        while(n!=0){
            int tp=n%10;
            rev=rev*10+tp;
            n=n/10;
        }
        return rev;
    }
public:
    bool isSameAfterReversals(int num) {
        
        int reversed1=doubleRev(num);
        int reversed2=doubleRev(reversed1);
        if(num==reversed2){
            return true;
        }
        return false;

    }
};