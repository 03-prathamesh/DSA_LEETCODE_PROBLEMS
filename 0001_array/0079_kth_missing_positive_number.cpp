class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>ans;
int mx=arr.size()-1;


        for(int i=1;i<=arr[mx];i++){

            for(int j=0;j<arr.size();j++){

                if(arr[j]>i){
                 ans.push_back(i);
                 break;
               
                }
                else if(arr[j]==i){
                    break;
                }
                
                
            }
        }

int anssize = ans.size() -1;
int last = 0;
if(anssize<=0)
{
    last = arr[mx];
}
else{
    last = (ans[anssize]>arr[mx])?ans[anssize]:arr[mx];
}
  if(k<=anssize+1 && anssize>0){
      return ans[k-1];
  }
  else if(anssize == 0 && k<last)
  {
      return ans[0];
  }
  else{
      return last + abs(anssize+1-k);

  }
    }
};