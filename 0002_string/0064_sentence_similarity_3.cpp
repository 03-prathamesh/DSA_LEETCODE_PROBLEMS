class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        
        vector<string>temp1;
        vector<string>temp2;
        stringstream tempo1(sentence1);
        string word1;
       
        while(tempo1>>word1){
            temp1.push_back(word1);
        }
        stringstream tempo2(sentence2);
        string word2;
        while(tempo2>>word2){
            temp2.push_back(word2);
        }

        int start1=0;
        int start2=0;
        int end1=temp1.size()-1;
        int end2=temp2.size()-1;
        while(start1<=end1 && start2<=end2){
            if(temp1[start1]==temp2[start2]){
                start1++;
                start2++;
            }
            else if(temp1[end1]==temp2[end2]){
                end1--;
                end2--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};