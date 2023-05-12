class Solution {
public:
    bool funt(string words){
        
        bool a=false;
        bool e=false;
        bool i=false;
        bool o=false;
        bool u=false;
   
       int n=words.size();
   
        for(int k = 0; k < n; k++)
        {
            if(words[k] == 'a')
            {
                a = true;
            }
            else if(words[k] == 'e')
            {
                e = true;
            }
            else if(words[k] == 'i')
            {
                i = true;
            }
            else if(words[k] == 'o')
            {
                o = true;
            }
            else if(words[k] == 'u')
            {
                u = true;
            }
            else
                return false;
        }
        
        return (a && e && i && o && u);
    }
        
    int countVowelSubstrings(string word) {
    
        int n = word.size();
        
        int ans = 0;
        
        for(int i = 0; i < n; i++)
        {
            string sub = "";
            
            for(int j = i; j < n; j++)
            {
                sub += word[j];
                
                if(sub.size() >= 5 && funt(sub))
                {
                    ans++;
                }
            }
        }
        
        return ans;
    }
};

/*
       bool a=false;
        bool e=false;
        bool i=false;
        bool o=false;
        bool u=false;
   
       int n=words.size();
  
        for(int i=0;i<n;i++){

            if(words[i]=='a'){
                a=true;
            }
            else if(words[i]=='e'){
                e=true;
            }
            else if(words[i]=='i'){
                i=true;
            }
            else if(words[i]=='o'){
                o=true;
            }
            else if(words[i]=='u'){
                u=true;
            }
            else{
                return false;
            }
        }

        return (a && e && i && o && u);

*/