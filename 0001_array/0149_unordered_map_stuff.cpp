#include<bits/stdc++.h>
using namespace std;


int main(){

   vector<string>v={"tea","eat","tan"};
   int m=v.size();
        
        map<map<char,int>,vector<string>> bm;
        
        for(int i=0;i<m;i++){
            map<char,int> sm;
            
            string s=v[i];
            int n=s.length();
            
            for(int i=0;i<n;i++){
                char ch=s[i];
                sm[ch]++;
            }
            
            vector<string> cur;
            if(bm.find(sm)!=bm.end()) cur=bm[sm];
            // cout<<cur<<endl;
            for(auto x:cur){
                cout<<x<<endl;
                cout<<endl;
            }
            cout<<endl;
            cout<<s;
            cur.push_back(s);
            
            bm[sm]=cur;
            // cout<<bm[sm];
        }
        
        vector<vector<string>> ans;
            
        for(auto it=bm.begin();it!=bm.end();it++){
            vector<string> cur=it->second;
            
            ans.push_back(cur);
        }
        
        






    return 0;
}