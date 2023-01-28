class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        


       vector<int>arr;

       arr.push_back(first);

       int temp=first;

       for(int i=0;i<encoded.size();i++){

            temp=temp^encoded[i];
            arr.push_back(temp);
       }

   return arr;
    }
};