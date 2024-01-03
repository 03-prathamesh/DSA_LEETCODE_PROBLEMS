class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        

        int ans=0;
        int first=count(bank[0].begin(),bank[0].end(),'1');
       
        for(int i=1;i<bank.size();i++){
           
            int third=count(bank[i].begin(),bank[i].end(),'1');
            if(third!=0){
                ans=ans+first*third;

                first=third;
            }
          
        }
        return ans;
    }
};