class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* p=node;
        ListNode* temp=node;
        temp=temp->next;
        ListNode* q=NULL;

        while(temp){
            q=node;//pointer sliding
            int n=temp->val;
            temp->val=node->val;
            node->val=n;

            temp=temp->next;
            node=node->next;
            
        }
        q->next=NULL;
        
        
      
        return ;
    }
};