class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
// int mx=arr[0];
// int max_ele=-1;


//         for(int i=0;i<arr.size();i++){
//             int count=0;
//             for(int j=0;j<arr.size();j++){

//                 if(arr[i]==arr[j]){
//                     count++;
//                 }
//             }

//             if(count>max_ele){

//                 max_ele=count;
//                 mx=arr[i];
//             }
//         }

 int n=0.25*arr.size();

  for(int i=0;i<arr.size();i++){

      if(count(arr.begin(),arr.end(),arr[i])>n){

          return arr[i];
      }
  }

        return -1;
    }
};