class Solution {
public:
    int distinctIntegers(int n) {

set<int>ans;


  while(n!=0){

  for(int i=1;i<n;i++){

      if(n%i==1){

            ans.insert(i);
      }
  }


    n=n-1;


  }

 return ans.size()+1;


    }
};