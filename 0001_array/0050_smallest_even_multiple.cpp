class Solution {
public:
    int smallestEvenMultiple(int n) {
        
 
   
    while( n%2!=0){


     int temp=n;

     int i=2;
      temp=n*i;   
        

        if(temp%n==0 && temp%2==0){

            return temp;
        }
    }


    return n;
 }


  
};