class Solution {
public:
    int alternateDigitSum(int n) {

            vector<int>ans;
            vector<int>temp;

             while(n>0){

                  int digit=n%10;
                   n=n/10;
                   temp.push_back(digit);
             }

             reverse(temp.begin(),temp.end());

             for(int i=0;i<temp.size();i++){

                 ans.push_back(temp[i]);
             }
        
             int sum=0;
             int sm=0;

       for(int i=0;i<ans.size();i=i+2){
            
             sum=sum+ans[i];

       }

        for(int i=1;i<ans.size();i=i+2){

           sm=sm+ans[i];
       }

       int final=sum-sm;

       return final;
        
    }
};