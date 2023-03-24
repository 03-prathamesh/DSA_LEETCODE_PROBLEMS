class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="++X" || operations[i]=="X++"){ //here for strinig comparison uuse double quotes
                ans++;
            }
            else{
                ans--;
            }
        }
        return ans;
    }
};