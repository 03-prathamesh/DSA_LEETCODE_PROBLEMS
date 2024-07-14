class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
       int start=0;
    //    start=(start+k)-1;
    //    nums.erase(nums.begin()+start);
    //    start++;
       while(nums.size()>1){
           start=(start+k-1)%nums.size();
           nums.erase(nums.begin()+start);
        //    start++;
       }
       return nums[0];
    }
   
};