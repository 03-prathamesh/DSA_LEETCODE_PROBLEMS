
class Solution {
public:
    double myPow(double x, int n) {
        
if(n==0){


    return 1.0;
}
if(n==1){


    return x;


}
if(n<0){

    return pow(1/x,-n);
}


int count=0;
           double y=1;

            while(count<n){



                y=y*x;
                count++;
            }
           return y;
    }
};