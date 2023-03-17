class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++; 
        }
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){  //this if value(frequency) of b in arr is 1 then c++;
                c++;
            }
            if(c==k){
                return arr[i];
            }
        }
        return "";
        
    }
};