class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       
 set<int>s1(arr.begin(),arr.end());//eg it will content 1 , 2, 3 only unique elements
 
 vector<int>ans;

   for(auto m:s1){

        int c=count(arr.begin(),arr.end(),m); // we are traversing all the array which has the duplicate elements
        //and we are checking the only single elements count ie unique elements of the set 
      ans.push_back(c);
   }

 for(int i=0;i<ans.size();i++){

      if(count(ans.begin(),ans.end(),ans[i])>1){

          return false;
      }
 }  
 

 

return true;
    }
};