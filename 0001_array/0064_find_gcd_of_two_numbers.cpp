class Solution {
public:
    int findGCD(vector<int>& nums) {
        
 sort(nums.begin(),nums.end());

  int greater=nums[nums.size()-1];
  int smaller=nums[0];
  int gcd=0;

  for(int i=1; i<=smaller;i++){

       if(smaller%i==0 && greater%i==0){

              gcd=i;
       }
  }

 return gcd;
    }
};