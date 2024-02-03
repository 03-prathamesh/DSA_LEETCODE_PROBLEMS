class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        // vector<int>ans;      TLE
        // for(int i=low;i<=high;i++){

        //     string len=to_string(i);
        //     int num=len[0]-'0';
        //     int greater=num;
        //     bool check=false;
        //     for(int j=1;j<len.size();j++){
        //         int num1=len[j]-'0';
        //         if(num1-greater==1){
        //             greater=num1;
        //         }
        //         else{
        //             check=true;
        //             break;
        //         }
        //     }
        //     if(check==false){
        //         ans.push_back(i);
        //     }
        // }
        // sort(ans.begin(),ans.end());
        // return ans;
        vector<int>ans;
        for(int i=1;i<9;i++){
            int num=i;
            for(int j=i+1;j<=9;j++){
                num=num*10+j;
                if(num>=low && num<=high){
                    ans.push_back(num);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;

       
    }
};