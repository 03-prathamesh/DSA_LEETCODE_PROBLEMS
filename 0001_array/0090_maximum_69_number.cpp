class Solution {
public:
    int maximum69Number (int num) {
      vector<int>ans;
      int temp=num;
       while(temp!=0){
           
           int t=temp%10;
           ans.push_back(t);
           temp=temp/10;
       } 
       reverse(ans.begin(),ans.end());
       
        // int greater=num;
        for(int i=0;i<ans.size();i++){

            if(ans[i]!=9){
                ans[i]=9;
                break;
            }
          
        }
        int sum=0;
         for(int i=0;i<ans.size();i++){

             sum=sum*10+ans[i];
         }

         return sum;
    }
};