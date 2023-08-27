class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        
        
        int left=0;
        int right=0;
        int empty=0;
        
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                left++;
            }
            else if(moves[i]=='R'){
                right++;
            }
            else{
                empty++;
            }
        }
        
        if(left>right){
            return ((left+empty)-right);
        }
        else if(right>left){
            return ((right+empty)-left);
        }
        else{
            return empty;
        }
        
      
       
    }
};class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        
        
        int left=0;
        int right=0;
        int empty=0;
        
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                left++;
            }
            else if(moves[i]=='R'){
                right++;
            }
            else{
                empty++;
            }
        }
        
        if(left>right){
            return ((left+empty)-right);
        }
        else if(right>left){
            return ((right+empty)-left);
        }
        else{
            return empty;
        }
        
      
       
    }
};