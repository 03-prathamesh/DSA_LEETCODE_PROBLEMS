class Solution {
public:
    vector<int> sumZero(int n) {

  vector<int>ans(n,0);

   if(n%2!=0){

         for(int i=n/2+1;i<n;i++){

             ans[i]=i;
             ans[n-i-1]=i*-1;
         }
   }
   else{

        for(int j=n/2;j<n;j++){
        
         ans[j]=j;
         ans[n-j-1]=j*-1;


        }
   }
 

 return ans;

    }
};