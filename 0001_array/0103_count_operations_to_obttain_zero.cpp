class Solution {
public:
    int countOperations(int num1, int num2) {
        int ans=0;
        int tp1=num1;
        int tp2=num2;

        while(tp1!=0 && tp2!=0){
            if(tp1>=tp2){
               tp1=tp1-tp2;
               ans++;
            }
            else{
                 tp2=tp2-tp1;
                 ans++;
                //  modified
            }
            
        }
        return ans;
    }
};