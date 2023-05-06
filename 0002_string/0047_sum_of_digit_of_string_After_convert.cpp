class Solution {
public:
     int compute(int tp){
               int cou=0;
                while(tp!=0){
                    int l=tp%10;
                    cou=cou+l;
                    tp=tp/10;
                }
                return cou;
     }
    int getLucky(string s, int k) {

        long long count=0;
        for(int i=0;i<s.size();i++){
            int tp=s[i]-'a'+1; // tp=s[i]-96
            if(tp>9){
               count=count+compute(tp);
            }
            else{
                count=count+tp;
            }
        }
        
        while(k>1){
            count=compute(count);
            k--;
        }
       
        return count;
    }
};