class Solution {
public:
    int findLucky(vector<int>& arr) {
        
 vector<int>ans;


    for(int i=0;i<arr.size();i++){

        if(count(arr.begin(),arr.end(),arr[i])==arr[i]){

            ans.push_back(arr[i]); 
        }
       
    }


 sort(ans.begin(),ans.end(),greater<int>());    
 if(ans.size()>=1){

     return ans[0];
 }


 return -1;
    }
};