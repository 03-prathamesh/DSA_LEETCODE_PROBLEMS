class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n1=s1.size();
        int n2=s2.size();
        int n3=s3.size();
        string temp;
        int s;
       
         if(s1.size()<=s2.size() && s1.size()<=s3.size()){
            // temp2=s1;
             temp=s1;
             s=s1.size();
        }
        else if(s2.size()<=s3.size() && s2.size()<=s1.size()){
            temp=s2;
            s=s2.size();
        }
        else{
            
            temp=s3;
            s=s3.size();
        }
        int count=0;
        for(int i=0;i<s;i++){
            if(s1[i]==temp[i] && s2[i]==temp[i] && s3[i]==temp[i]){
                count++;
            }
            else{
                break;
            }
          
        }
        if(count>0){
           int add=abs(count-n1)+abs(count-n2)+abs(count-n3);
            return add;
        }
        else{
            return -1;
        }
       
        return -1;
    }
};