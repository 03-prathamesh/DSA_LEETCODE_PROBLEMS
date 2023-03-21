class Solution {
public:
    bool halvesAreAlike(string s) {
        string a="";
        string b="";
        int i;
        for(i=0;i<s.size()/2;i++){
            a=a+s[i];
        }
        for(int j=i;j<s.size();j++){
            b=b+s[j];
        }

        int ct=0,ct2=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
                ct++;
            }
             if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u' || b[i]=='A' || b[i]=='E'|| b[i]=='I' || b[i]=='O'|| b[i]=='U'){
                ct2++;
            }
        }

        return (ct==ct2);
        
    }
};