class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        //  int consecutiveWins=0;
        //  while(1){
        //     if(arr[0]>arr[1]){
        //          consecutiveWins++;
        //     }
        //     else{
                
        //         swap(arr[0],arr[1]);
        //         consecutiveWins=1;
        //     }
        //     int temp=arr[1];
        //     for(int i=1;i<arr.size();i++){
        //          arr[i]=arr[i+1];
        //     }
        //     arr[arr.size()-1]=temp;
            

        //     if(consecutiveWins>=k){
        //         return arr[0];
        //     }

             
        //  } 
        if(arr.size()==1){
            return arr[0];
        }

        if(arr.size()<k){
            return *max_element(arr.begin(),arr.end());
        }
        int cons=0;
        int curr_greater=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>curr_greater){
                curr_greater=arr[i];
                cons=1;
            }
            else{
                cons++;
            }

            if(cons>=k){
                return curr_greater;
            }
        }
         return curr_greater;
    }
};