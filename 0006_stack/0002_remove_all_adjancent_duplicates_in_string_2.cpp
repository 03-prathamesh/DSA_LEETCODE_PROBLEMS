class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> s1;

        for (int i = 0; i < s.size(); i++) {
            if (!s1.empty()) {

                if (s1.top().first == s[i]) {
                    s1.top().second++;
                } else {
                    s1.push({s[i], 1});
                }

                if (s1.top().second == k) {
                    // for(int i=0;i<k;i++){
                    s1.pop();
                }
            } else {
                s1.push({s[i], 1});
            }
        }
        string ans = "";
        while (!s1.empty()) {
            for(int i = 0; i < s1.top().second;i++){
                ans.push_back(s1.top().first);
            }
            s1.pop();
        }
        

        reverse(ans.begin(), ans.end());
        return ans;
    }
};