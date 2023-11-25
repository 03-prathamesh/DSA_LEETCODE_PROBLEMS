class Solution {
public:
    bool check(vector<int>temp){
        sort(temp.begin(),temp.end());
        if(temp.size()<2){
            return true;
        }
        int diff=temp[1]-temp[0];
        for(int i=1;i<temp.size()-1;i++){
            if((temp[i+1]-temp[i])!=diff){
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            vector<int>temp;
            for(int j=l[i];j<=r[i];j++){
               temp.push_back(nums[j]);
            }
             bool main_ans=check(temp);
             ans.push_back(main_ans);
            //  temp.clear();  there is no need to clear because every time after i it creates new temp with 0 elements
        }
        return ans;
    }
};