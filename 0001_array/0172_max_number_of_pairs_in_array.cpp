class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int count2=0;
        for(auto x:mp){
            if(x.second>1){
                // int num=x.second/2;
                // count=count+num;
                // mp[x.first]=mp[x.first]-num;
                if(x.second%2==0){
                    count=count+x.second/2;
                    mp[x.first]=0;
                }
                else{
                    count=count+x.second/2;
                    // mp[x.first]=mp[x.first]-(x.second/2);
                    count2++;

                }
            }
            else{
                count2++;\
                
            }
          
            
        }

      

        return {count,count2};
    }
};