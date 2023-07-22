class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *p=head; // pointer p is pointing to the starting node of linked list.
        int n_size=0;
        while(p!=NULL){
            n_size++;
            p=p->next;
        }
        
        int mid=(n_size/2);
        p=head;
        while(mid--){
            p=p->next;
        }
        
        return p;
    }
};