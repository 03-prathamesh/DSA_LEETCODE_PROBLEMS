
// 300.Longest increasing subsequence


#include<bits/stdc++.h>
using namespace std;

int main(){


  vector<int> lis = {1, 2, 4, 6};
   vector<int> nums = {3, 5};

    // Loop through nums to add elements to lis
    // for (int i = 0; i < nums.size(); ++i) {
        // Find the position to insert nums[i] in the increasing subsequence lis
        auto it = lower_bound(lis.begin(), lis.end(), nums[0]);

        // Update lis by replacing or adding the element
        *it = nums[0];
        // cout<<*it<<endl;


        //it represents the position where 3 shoulf be inserted in list
        //*it=3  updates the value at that position bro 
        // Output the updated lis
        cout << "After adding " << nums[1] << ": ";
        for (int num : lis) {
           cout << num << " ";
        }
    //    cout << endl;
    // }





    return 0;
}