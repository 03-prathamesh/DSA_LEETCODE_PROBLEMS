class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        sort(nums.begin(),nums.end());
         vector<double>avgs;
        //  double avg;
        while(i<j){
            double  avg=((double)nums[i]+(double)nums[j])/2;
            avgs.push_back(avg);
            cout<<avg<<" ";
            i++;
            j--;
        }
        set<double>s1(avgs.begin(),avgs.end());
        return s1.size();

    }
};