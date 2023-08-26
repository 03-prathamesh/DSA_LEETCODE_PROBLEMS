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
    ListNode* oddEvenList(ListNode* head) {



      if(head==NULL){
          return head;    //it will return null
      }

      ListNode *odd=head;
      ListNode *even=head->next;
      ListNode *join=head->next;

      while(odd->next!=NULL && even->next!=NULL){
          odd->next=even->next; //pointer vegly nodes la point(reference ) kartat, linked list broke karun parat jodtoy
           odd=even->next;
          

          even->next=odd->next;
          even=odd->next;
      } 

      odd->next=join;

      return head;










//    poiahnter reference change karaych hot tr m values change kart hoto .
    //     int i=0;
    //     ListNode *s=head;
    //     while(s!=NULL){
    //         i++;
    //         s=s->next;
    //     }
       
    //    ListNode *q=head->next;
    //    ListNode *p=q->next;
    //    ListNode *temp=q;

    // //    ListNode *even=q;
    // //    ListNode *odd=p;
        
    //     while(p!=NULL && q!=NULL){
            
    //         swap(q->val,p->val);
    //         //  temp->val=p->val;
    //         // temp=temp->next;

    //         if(p!=NULL){
    //             q=p->next;
    //         }

    //         if(q!=NULL){
    //             p=q->next;
    //         }
    //     }
    //     // ListNode *even=head->next;
    //     // ListNode *odd=even->next;
    //     // while(odd!=NULL && even!=NULL ){
    //     //     temp->val=even->val;
    //     //     temp=temp->next;
            
    //     //        if(odd!=NULL){
    //     //         even=odd->next;
    //     //        }
               

    //     //         if(even!=NULL ){
    //     //           odd=even->next;
    //     //         }
               
    //     // }

       
      
    }
};