class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
      vector<int>temp;
     vector<int>final;
            int n = arr1.size();
        int m = arr2.size();
   
    for(int i=0;i<m;i++){


      for(int j=0;j<n;j++){

            if(arr2[i]==arr1[j]){

                final.push_back(arr1[j]);
            }

         }
    }


 for(int i=0;i<n;i++){

     if(count(final.begin(),final.end(),arr1[i])==0){

         temp.push_back(arr1[i]);
     }
 }
  
  sort(temp.begin(),temp.end());

  for(int i=0;i<temp.size();i++){

         final.push_back(temp[i]);
  }


return final;

    }
};