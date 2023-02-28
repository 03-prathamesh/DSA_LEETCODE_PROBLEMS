class Solution {
public:
    int minimumOperations(vector<int>& nums) {

 set<int>ans;

  for(auto x:nums){

      if(x!=0){
          ans.insert(x);
      }
  }


  return ans.size();

    }
};


// brut-force approach
sort(nums.begin(),nums.end());
 vector<int>ans;
 ans=nums;


int i=0;
int itr=0;
int sum=0;
int count=0;

set<int>s(nums.begin(),nums.end());


  while(s.size()>count){

 if(i<nums[itr] && nums[itr]!=0){

     i=nums[itr];

     

     for(int i=0;i<nums.size();i++){

         int n=nums[i]-i;
         nums[i]=n;
        
     }

     count++;
 }
 else if(i==nums[itr] && nums[itr]){
     
      for(int i=0;i<nums.size();i++){

         int n=nums[i]-i;
         nums[i]=n;
     }
 count++;
 }
 


  
  }

  return count;