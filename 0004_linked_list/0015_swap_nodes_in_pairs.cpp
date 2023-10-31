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
    ListNode* swapPairs(ListNode* head) {

        if(!head || head->next==NULL){
            return head;
        }
        ListNode* dummy=new ListNode(0);
        ListNode *prev=dummy;
        ListNode *p=head;
        ListNode *q=head->next;
        dummy->next=head;
        while(q){
            prev->next=q;
            p->next=q->next;
            q->next=p;

            prev=p;
            p=p->next;
            if(p){
               q=p->next;
            }
            else{
                break;
            }
        }
        head=dummy->next;
        delete dummy;
        return head;

    }
};