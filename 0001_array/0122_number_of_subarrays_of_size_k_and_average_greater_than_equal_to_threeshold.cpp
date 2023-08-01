class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0;
        int avg=0;
        int addition=0;
        for(int i=0;i<k;i++){
            addition=addition+arr[i];
        }
        
         avg=addition/k;
         if(avg>=threshold){
             count++;
         }
        for(int i=k;i<arr.size();i++){
            addition=(addition-arr[i-k])+arr[i];
            avg=addition/k;
            if(avg>=threshold){
                count++;
             }
        }
        return count;
    }
};