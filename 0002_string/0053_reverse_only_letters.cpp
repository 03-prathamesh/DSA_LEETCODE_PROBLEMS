class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<=end){
            if(((s[start]>='a' && s[start]<='z') || (s[start]>='A' && s[start]<='Z')) && ((s[end]>='a' && s[end]<='z') || (s[end]>='A' && s[end]<='Z'))){
                swap(s[start],s[end]);
                 start++;
                 end--;
            }
            else if ((s[start]>='a' && s[start]<='z') || (s[start]>='A' && s[start]<='Z')){
               end--;

            }
             else if ((s[end]>='a' && s[end]<='z') || (s[end]>='A' && s[end]<='Z')){
               start++;

            }
            else{
                start++;
                end--;
            }
           
        }
        return s;
    }
};