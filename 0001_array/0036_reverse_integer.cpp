class Solution {
public:
    int reverse(int x) {
        

       long num=abs(x);
       long nums=abs(x);
       

      long id=0;
      long digit=0;

      INT_MAX;
      INT_MIN;


  

    

        while(num !=0){
               
               digit =num%10;
               id=id*10+digit;

                if(id>INT_MAX || id<INT_MIN){

       return 0;
   }

               num=num/10;

        }



        if(x<0){
            return -id;
        }
        else{
            return id;
        }
    }
};