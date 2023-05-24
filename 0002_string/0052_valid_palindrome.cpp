// class Solution {
  
// public:

//    bool cap(char s){
//        if((s>='A' && s<='Z')|| (s>='a' && s<='z') || (s>='0' && s<='9')) {
//            return true;
//        }
//        return false;
//     }

//     bool isPalindrome(string s) {
        
//  string temp="";
//  for(int i=0;i<s.size();i++){
//      if(cap(s[i])){
          
//           char tp=tolower(s[i]);
//           temp.push_back(tp);

//      }
//  }


   
//    int sta=0;
//    int end=temp.size()-1;

//    while(sta<=end){
//        if(temp[sta]!=temp[end]){
//            return false;
//        }
//        else{
//          sta++;
//          end--;
//        }
//    }
//    return true;
// //     string temp1=temp;
// //    reverse(temp.begin(),temp.end());
// //     if(temp==temp1){
// //         return true;
// //     }
// //     return false;
//     }
// };  dont know why this code giving me the error evven if it is correct

class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])) {
                s[i] = tolower(s[i]);
            }

            if(isalnum(s[i])) {
                str.push_back(s[i]);
            }
        }
        string rev = str;
        reverse(rev.begin(), rev.end());
        return str == rev;
    }
};