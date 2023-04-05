    class Solution {
    public:
        bool isSubString(string parent, string child)
        {
            int parentLength = parent.length();
            int childLength = child.length();
             for (int i = 0; i <= parentLength - childLength; i++) {
                 int j;
                 for (j = 0; j < childLength; j++) {
                     if (parent[i+j] != child[j]) {
                         break;
                     }
                 }
                 if (j == childLength) {
                     return true;
                 }
             }   
            return false;
        }

        int numOfStrings(vector<string>& patterns, string word) {
            int ans=0;
            int flag = 0;
            
            for(int i = 0;i<patterns.size();i++)
            {
                string subword = patterns[i];
                if(isSubString(word,  subword))
                    ans++;
            }
            return ans;
        }
    };          