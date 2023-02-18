class Solution {
public:
    int pivotInteger(int n) {
        

  int sum=0;
  int  num=0;


  for(int i=1;i<=n;i++){

      sum+=i;
 
  }

  int j=1;

  while(j<=n){


     

        if(j*j==sum){

            return  j;
        }

           j++;
  }



  return -1;
    }
};