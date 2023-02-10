// https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {

    sort(seats.begin(),seats.end());
    sort(students.begin(),students.end());
    int moves=0;

   for(int i=0;i<seats.size();i++){
      


//          if(students[i]>seats[i]){
//              moves=moves+(students[i]-seats[i]);
//          }
//          else{

//               moves=moves+(seats[i]-students[i]);
//          }
         moves=moves+(abs(seats[i]-students[i]));


       }

      return moves;   
           
 


    }
};
