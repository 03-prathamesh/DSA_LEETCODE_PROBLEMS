class Solution {
public:
    bool isStrictlyPalindromic(int n) {

       
        for(int i=2;i<=n-2;i++){
            vector<int>binary;
            int temp=n;
            while(temp!=0){
                binary.push_back(temp%i);
                temp=temp/i;
            }

            int start=0;
            int end=binary.size()-1;
            while(start<=end){
                if(binary[start]!=binary[end]){
                    return false;
                }
                start++;
                end--;
            }
            // binary.empty();

            
        }
        return true;
       
    }
};