/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }

        ListNode *turtle;
        ListNode *rabbit;
        turtle=rabbit=head;

        while(rabbit!=NULL && rabbit->next!=NULL){
            turtle=turtle->next;
            rabbit=rabbit->next->next;


            if(rabbit==turtle){
                return true;
            }
        }
        return false;
        
    }
};