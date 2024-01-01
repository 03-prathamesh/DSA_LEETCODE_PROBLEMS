class Solution {
public:
    long long countVowels(string word) {

 long long int sum=0;
   
    for (int j = 0; j < word.size(); j++) {
         if(word[j]=='a' || word[j]=='e' || word[j]=='i' || word[j]=='o' || word[j]=='u'){
              long long int left=j;
              long long int right =(word.size()-1)-j;
              long long int middle=left*right;
               long long int last=word.size()-j;
               sum=sum+(right*left)+last+left;
         }
    }
         return sum;

        //TLE
    //     vector<string>ans;
    //     int sum=0;
    //     for(int i=0;i<word.size();i++){
    //         string temp="";
    //         for(int j=i;j<word.size();j++){
    //             temp=word.substr(i,j-i+1);
    //             ans.push_back(temp);
    //         }
    //     }
      
    // for (int j = 0; j < ans.size(); j++) {
    //     for (int i = 0; i < ans[j].size(); i++) {
    //         if (ans[j][i] == 'a' || ans[j][i] == 'e' || ans[j][i] == 'i' || ans[j][i] == 'o' || ans[j][i] == 'u') {
    //             sum++;
    //         }
    //     }
    // }
    //     return sum;
   
    }
};