class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<2){
            return s.size();
        }
        unordered_set<char>ans;
        int max_len=INT_MIN;
        int right=0;
        int left=0;
        while(right!=s.size()){
            if(ans.find(s[right])==ans.end()){
                ans.insert(s[right]);
                max_len=max(max_len,(right-left)+1);
                right++;
            }
            else{
                ans.erase(s[left]);
                left++;
            }
        }
        return max_len;
    }
};