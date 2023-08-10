class Solution {
public:
    int fib(int n) {

     //solving this problem using recursion
        
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }

        int ans=fib(n-1)+fib(n-2);
        return ans;


    }
};