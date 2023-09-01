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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *p=head->next;
        long long sum=0;
        vector<int>ans;
        while(p!=NULL){
            if(p->val!=0){
                sum=sum+p->val;
            }
            else{
                ans.push_back(sum);
                sum=0;
            }
            p=p->next;
        }
       
        ListNode *q=head;
        int i=0;
        while(q!=0){
            q->val=ans[i];
            i++;
             if(i>=ans.size()){
                break;
            }
            q=q->next;

           
        }
        
            q->next=NULL;
        
        return head;
    }
};