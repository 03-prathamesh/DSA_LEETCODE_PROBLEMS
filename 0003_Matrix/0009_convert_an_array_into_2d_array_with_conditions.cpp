class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
    
      unordered_map<int,int>mp;
      vector<vector<int>>ans;
      for(auto x:nums){
          mp[x]++;
      }

      int maxi=0;
      for(auto x:mp){
          if(x.second>maxi){
              maxi=x.second;
          }
      }

      for(int i=0;i<maxi;i++){
          vector<int>temp;
          for(auto& x:mp){
              if(x.second>0){
                  temp.push_back(x.first);
                  x.second--; //here it will not change actual mp value but because we use & after auto so it will change the actual
                  //mp[x.first]--;
              }
              
          }
          ans.push_back(temp);
      }
      return ans;

//      unordered_map<int,int>mp;
//        for(auto x : nums){
//            mp[x]++;
//        } 
//        vector<vector<int>>res;
//        while(mp.size()){
//            vector<int>v;
//            for(auto i : mp){
//                v.push_back(i.first);
//                mp[i.first]--;
//            }
//            for(auto i : v){
//                if(mp[i]==0){
//                    mp.erase(i);
//                }
//            }
//            res.push_back(v);
//        }
//        return res;
        
//     }
// };