class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int project_sum=1;
        int digit_sum=0;
        while(n!=0){
            int temp=n%10;
            project_sum=temp*project_sum;
            digit_sum=temp+digit_sum;
            n=n/10;
        }
        
        return project_sum-digit_sum;
    }
};