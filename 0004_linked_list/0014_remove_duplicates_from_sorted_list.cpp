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
    ListNode* deleteDuplicates(ListNode* head) {

        if(!head){
            return NULL;
        }
        ListNode *q=head;
        ListNode *p=head->next;
        while(p!=NULL){
        
           if(p->val!=q->val){
               q->next=p;
               q=p;
           }
          
           p=p->next;
        }
         q->next=NULL;
        return head;
    }
};