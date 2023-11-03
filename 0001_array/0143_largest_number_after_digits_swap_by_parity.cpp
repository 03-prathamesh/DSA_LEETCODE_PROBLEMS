class Solution {
public:
    int largestInteger(int nums) {
        string num=to_string(nums);
        for(int i=0;i<num.size()-1;i++){
            for(int j=i+1;j<num.size();j++){
                if((num[i]%2==0 && num[j]%2==0)||(num[i]%2!=0 && num[j]%2!=0)){
                    if(num[j]>num[i]){
                        swap(num[j],num[i]);
                    }
                }
            }

        }
        int ans=stoi(num);
        return ans;
    }
};