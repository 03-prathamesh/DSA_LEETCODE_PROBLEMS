class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        //converting the indices in the decimal form
        int final=0;
        if(k==0){
            final=final+nums[0];
        }
        for(int i=1;i<nums.size();i++){
            int temp=i;
            int sum=0;
            int add=0;
            while(temp!=0){
                int t=temp%2;
                if(t==1){
                    add++;
                }
                sum=sum*10+t;
                temp=temp/2;    
            }
            
            if(add==k){
                final=final+nums[i];
            }
            
           
        }
        return final;
    }
};