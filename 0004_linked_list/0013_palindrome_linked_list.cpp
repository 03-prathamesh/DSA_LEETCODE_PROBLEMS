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
ListNode * reverse(ListNode *ptr){
       ListNode *prev_node=NULL;
       ListNode *current_node=ptr;
       while(current_node!=NULL){
           ListNode *next_node=current_node->next;
           current_node->next=prev_node;
           prev_node=current_node;
           current_node=next_node;
       }
       return prev_node;
}
public:
    bool isPalindrome(ListNode* head) {
       ListNode *fast=head;
       ListNode *slow=head;
       while(fast->next!=NULL && fast->next->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }

       slow->next=reverse(slow->next);
       slow=slow->next;
       ListNode *one=head;
       ListNode *two=slow;
       while(two!=NULL){
           if(one->val!=two->val){
               return false;
           }
           one=one->next;
           two=two->next;
       }
       return true;
       
        
    }
};