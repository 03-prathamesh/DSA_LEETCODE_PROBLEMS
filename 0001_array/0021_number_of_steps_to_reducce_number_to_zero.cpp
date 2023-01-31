class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
       int divide=num;
while(divide!=0){
        if(divide%2==0){


            count++;
            divide=divide/2;
        }
        else{

            divide=divide-1;
            count++;
        }


}

return count;
    }
};