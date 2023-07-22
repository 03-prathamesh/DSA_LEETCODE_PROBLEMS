class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>data;
        ListNode *temp=head;
        ListNode* final=head;

        while(temp!=NULL){

            int n=temp->val;
            data.push_back(n);
            temp=temp->next; //switch to next node
           
        }
        
        int start=0;
        int end=data.size()-1;
        while(start<=end){
            int d=data[end];
            data[end]=data[start];
            data[start]=d;

            start++;
            end--;
        }
        
        int i=0;
        while(final){
            final->val=data[i];
            final=final->next;
            i++;
        }
        
        return head;
    }
};