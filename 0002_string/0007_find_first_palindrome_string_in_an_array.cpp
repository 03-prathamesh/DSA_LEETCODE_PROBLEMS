#include<bits/stdc++.h>
using namespace std;

class Solution {
   
   bool isPalindrome(string str){
          int i=0;
          int j=str.size()-1;
          string temp=str;
          while(j>=i){
              swap(str[i],str[j]);
              i++;
              j--;
          }
          if(temp==str){
              return true;
          }
          return false;
   }
   public:
  
    string firstPalindrome(vector<string>& words) {
         
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            if(isPalindrome(words[i])==true){
                ans.push_back(words[i]);
            }
        }
        if(ans.size()>0){
        return ans[0];
        }
        return "";
    }
 
    //  void display(){
    //    cout<<"the palindrome is : "<<firstPalindrome(vector<string>& words);
    //  }
};

int main(){

   Solution sp;
   vector<string>answ= {"abc","car","ada","racecar","cool"};
   string found= sp.firstPalindrome(answ);
   cout<<"the palindrome is: "<<found;

    return 0;
}