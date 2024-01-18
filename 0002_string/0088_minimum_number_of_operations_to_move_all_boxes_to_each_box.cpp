class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>main;
        for(int i=0;i<boxes.size();i++){
              int ans=0;
            for(int j=0;j<boxes.size();j++){
                if(boxes[j]=='1'){
                    ans=ans+abs(j-i);
                }
            }
            main.push_back(ans);
        }
        return main;
    }
};