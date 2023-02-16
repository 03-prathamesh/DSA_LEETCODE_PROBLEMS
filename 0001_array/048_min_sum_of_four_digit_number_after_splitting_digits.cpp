class Solution {
public:
    int minimumSum(int num) {
        
 vector<int>ans(4);

int ind=0;


  while(num>0){

       int temp=num%10;

       ans[ind++]=temp;

    //    ind++;

       num=num/10;

  }


 sort(ans.begin(),ans.end());

  int final=ans[0]*10+ans[2]+ans[1]*10+ans[3];

 return final;
    }
};