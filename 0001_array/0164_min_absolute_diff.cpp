class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       int mini_diff=INT_MAX;
       vector<vector<int>>mp;
       sort(arr.begin(),arr.end());
       for(int i=1;i<arr.size();i++){
           mini_diff=min(mini_diff,abs(arr[i]-arr[i-1]));
       }
       for(int i=0;i<arr.size()-1;i++){
        //    vector<int>temp;
          
               if(abs(arr[i+1]-arr[i])==mini_diff){
                   mp.push_back({arr[i],arr[i+1]});
               }
           
       }
       return mp;
    }
};