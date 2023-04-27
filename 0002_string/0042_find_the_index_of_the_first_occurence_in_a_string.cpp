class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=needle.size();
        int n=haystack.size();
        int i=0;
        int j=0;
        int start=0;

        while(i<n && j<m){
             if(haystack[i]==needle[j]){

                 if((i-start)+1==m){
                     return start;
                 }
                 i++;
                 j++;
                 
             }
             else{
                 j=0;
                 start++;
                 i=start;
             }
        }
        return -1;
    }
};