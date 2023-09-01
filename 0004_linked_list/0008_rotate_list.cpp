/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
       
   
        vector<int>nums;

        ListNode *p=head;
       
        while(p){
            nums.push_back(p->val);
            p=p->next;
        }        
        vector<int>temp(nums.size());

        for(int i=0;i<nums.size();i++){
           temp[(k+i)%nums.size()]=nums[i];
        }
      

        ListNode *z=head;
        int j=0;
        while(z){
            z->val=temp[j];
            j++;
            z=z->next;
        }
        return head;
    }
};