class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){

            if(i==0){
                ans.push_back(0);
            }
            else{
                long sum=0;
                int num=i;
                while(num>0){
                     int temp=num%2;
                     if(temp==1){
                         sum=sum+1;
                     }
                     num=num/2;
                }
                ans.push_back(sum);
            }
            
          
        }
        return ans;
    }
};