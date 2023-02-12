class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        
// sort(arr.begin(),arr.end());
int n=arr.size();
int count=0;

  for(int i=0;i<n;i++){

     for(int j=i+1;j<n;j++){

        if(abs(arr[i]-arr[j])<=a){

               int k=j+1;
             
               for(int p=k;p<n;p++){

                   if(abs(arr[j]-arr[p])<=b){

                      

                       if(abs(arr[i]-arr[p])<=c){

                           count++;
                           
                       }

                    

                   }
               }
        }






     }
 



  }


return count;



    }
};