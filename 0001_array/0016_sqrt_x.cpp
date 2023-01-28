class Solution {
public:
    int mySqrt(int x) {

          long long temp=0;
          while(temp*temp<=x){

              temp++;
          }

          return (temp-1);
    }
};  