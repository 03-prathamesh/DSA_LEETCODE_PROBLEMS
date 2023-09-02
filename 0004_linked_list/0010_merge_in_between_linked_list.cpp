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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=1;
        ListNode *head1=list1;
        ListNode *head2=list2;
        ListNode *p=head1;
       
        while(count!=a){
            p=p->next;
            count++;
        }
     
         ListNode *r=p;
         while(count!=b){
             r=r->next;
             count++;
         }
         r=r->next;
      

        p->next=head2;
        while(p->next!=NULL){
            p=p->next;
        }
        ListNode *z=r->next;
        p->next=z;
        while(z->next!=NULL){
            z=z->next;
        }
      
       return list1;
    }
};