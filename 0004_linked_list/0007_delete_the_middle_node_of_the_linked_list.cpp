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
    ListNode* deleteMiddle(ListNode* head) {
         ListNode *ptr=head;
         int count=0;
         while(ptr){
             ptr=ptr->next;
             count++;
         }

         if(count==1){
             delete head;
             return nullptr;
         }

        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode *p=slow->next;
        ListNode *q=head;
        while(q->next!=slow){
            q=q->next;
        }
        q->next=p;
        // delete slow;

      
        return head;
    }
};