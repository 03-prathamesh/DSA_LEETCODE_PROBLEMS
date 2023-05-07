class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        
        int ans=arrivalTime+delayedTime;
        if(ans>=24){
            int j=0;
            for(int i=24;i<=48;i++){
                 if(i==ans){
                     ans=j;
                 }
                 j++;
            }
        }
        return ans;
    }
};