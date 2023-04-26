class Solution {
public:
    string removeDigit(string number, char digit) {
       
           string ans="";
           string temp=number;
           for(int i=0;i<number.size();i++){
              if(number[i]==digit){
                 number.erase(i,1);
                 ans=max(ans,number);
                //  cout<<number<<"   ";
              }
               number=temp;
            }
           return ans;
    }
};