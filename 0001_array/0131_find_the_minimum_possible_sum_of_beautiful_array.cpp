class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        set<int>s1;
        long long sum=0;
        for(int i=1;s1.size()<n;i++){
            if(s1.find(target-i)==s1.end()){
                s1.insert(i);
                sum=sum+i;
            }
        }
        return sum;
    }
};