class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i;
        for( i=1;i<=num;i++){
            if(i*i==num){
                return true;
            }
        }
        return false;
    }
};